#
#define FittingExample_cxx
#include "FittingExample.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
//  the next line includes the external function used by the fits
//  alternatively, one could load it manually in each ROOT session
#include "fit1MeV_Gaussian.C"

void FittingExample::Loop() {
    //   In a ROOT session, you can do:
    //      Root > .L FittingExample.C
    //      Root > FittingExample t
    //      Root > t.GetEntry(12); // Fill t data members with entry number 12
    //      Root > t.Show();       // Show values of entry 12
    //      Root > t.Show(16);     // Read and show values of entry 16
    //      Root > t.Loop();       // Loop on all entries
    //

    //     This is the loop skeleton where:
    //    jentry is the global entry number in the chain
    //    ientry is the entry number in the current Tree
    //  Note that the argument to GetEntry must be:
    //    jentry for TChain::GetEntry
    //    ientry for TTree::GetEntry and TBranch::GetEntry
    //
    //       To read only selected branches, Insert statements like:
    // METHOD1:
    //    fChain->SetBranchStatus("*",0);  // disable all branches
    //    fChain->SetBranchStatus("branchname",1);  // activate branchname
    // METHOD2: replace line
    //    fChain->GetEntry(jentry);       //read all branches
    //by  b_branchname->GetEntry(ientry); //read only this branch
    if (fChain == 0) return;

    //  do general initialization here

    //  the following Double_t variables are used to store the parameters
    //  returned by fits to histograms.  The corresponding TString variables
    //  are used to write these numbers as text.
    Double_t sigma;
    Double_t deltaSigma;
    Double_t mu;
    Double_t deltaMu;
    Double_t total;
    Double_t deltaTotal;
    TString sigmaStr;
    TString deltaSigmaStr;
    TString muStr;
    TString deltaMuStr;
    TString totalStr;
    TString deltaTotalStr;

    // the following line declares a "pave" which is ROOT-speak for a box
    // in which one writes text.
    auto pt = new TPaveText(0.12,0.72,0.42,0.85, "NDC"); // NDC sets coords


    TStyle *myDefaultStyle = new TStyle("myDefaultStyle","my local default style");
    myDefaultStyle->SetTitleSize(0.06);
    myDefaultStyle->SetTitleOffset(0.75);
    myDefaultStyle->SetLabelFont(62);
    myDefaultStyle->SetLineWidth(2);
    myDefaultStyle->SetLineColor(kBlue+2);
    myDefaultStyle->SetHistMinimumZero(kTRUE);
    myDefaultStyle->cd();


    TH1 * strippingLevelXiLLMassHist = new TH1D("LambdaLL,pi mass","LL: stripping level cuts",40,1302.,1342.);
    TH1 * strippingLevelXiDDMassHist = new TH1D("LambdaDD,pi mass","DD: stripping level cuts",40,1302.,1342.);
    TH1 * xiLLgoodPromptPi = new TH1D("LambdaLL,pi mass","LL: after some cuts",40,1302.,1342.);
    TH1 * xiDDgoodPromptPi = new TH1D("LambdaDD,pi mass","DD: after some cuts",40,1302.,1342.);

    Long64_t nentries = fChain->GetEntriesFast();

    Long64_t nbytes = 0, nb = 0;
    //   for (Long64_t jentry=0; jentry<nentries;jentry++) {
    //   create mentries which can be set lower than nentries for debugging with
    //   a smaller number of events
    Long64_t mentries = nentries;
    if (mentries > 100000) {
        mentries = 100000;
    }
    for (Long64_t jentry=0; jentry<mentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;

        // begin my per event code

        bool GoodLambdaLL = false;
        if ( (Xi_MM > 1302. && Xi_MM < 1342.) &&
                (3 == DecayPr_TRACK_Type) && (DecayPr_TRACK_GhostProb < 0.25) && (DecayPi_TRACK_GhostProb < 0.25)
                && ( DecayPr_ProbNNp > 0.2) && (Lambda_ENDVERTEX_Z > -100. && Lambda_ENDVERTEX_Z < 400.)
                && ( Lambda_MM > 1110. && Lambda_MM < 1121.) ) {
            GoodLambdaLL = true;
        }

        bool GoodLambdaDD = false;
        if ( (Xi_MM > 1302. && Xi_MM < 1342.) &&
                (5 == DecayPr_TRACK_Type) && ( DecayPr_ProbNNp > 0.05) && (Lambda_ENDVERTEX_Z < 2275.)
                && ( Lambda_MM > 1110. && Lambda_MM < 1121.) ) {
            GoodLambdaDD = true;
        }


        if ( (3 == DecayPr_TRACK_Type) ) {
            strippingLevelXiLLMassHist->Fill(Xi_MM);
        }
        if ( (5 == DecayPr_TRACK_Type) ) {
            strippingLevelXiDDMassHist->Fill(Xi_MM);
        }

        double deltaZ = Lambda_ENDVERTEX_Z - Xi_ENDVERTEX_Z;
        double pvDeltaZ = Xi_ENDVERTEX_Z - Xi_OWNPV_Z;

        bool PromptLongPiLowGP = false;
        if ((3 == PromptPi_TRACK_Type ) && (deltaZ > 0.) && (PromptPi_TRACK_GhostProb < 0.3)) {
            PromptLongPiLowGP = true;
        }

        if (GoodLambdaLL && PromptLongPiLowGP) {
            xiLLgoodPromptPi->Fill(Xi_MM);
        }

        if (GoodLambdaDD && PromptLongPiLowGP) {
            xiDDgoodPromptPi->Fill(Xi_MM);
        }


    }  // end of per event code

    TCanvas c1;

    //  declare myXiFit as a pointer to a TF1 fitting object
    //  initialize the parameters which correspond to the number of
    //  events in the Gaussian signal, the central value, the width,
    //  the background intercept, and the background slope.  The
    //  external fitting function "fit1MeV_Gaussian" *assumes*
    //  the histogram bin width is 1 MeV (or 1 whatever unit).
    //  If this is not true, the returned number of signal events
    //  will be incorrect.
    TF1 *myXiFit = new TF1("myXiFit",fit1MeV_Gaussian,1303.,1340.,5);
    myXiFit->SetParameter(0,100000.);
    myXiFit->SetParameter(1,1322.);
    myXiFit->SetParameter(2,3.);
    myXiFit->SetParLimits(2,0.,10.);
    myXiFit->SetParameter(3,500);
    myXiFit->SetParameter(4,0.);

    strippingLevelXiLLMassHist->Draw();
    strippingLevelXiLLMassHist->Fit("myXiFit");
    pt->Clear();
    total = myXiFit->GetParameter(0);
    totalStr.Form("%4.0f\n",total);
    deltaTotal = myXiFit->GetParError(0);
    deltaTotalStr.Form("%4.0f\n",deltaTotal);
    auto text = pt->AddText("signal  =  "+totalStr+"  #pm"+deltaTotalStr);
    sigma = myXiFit->GetParameter(2);
    sigmaStr.Form("%6.2f\n",sigma);
    deltaSigma = myXiFit->GetParError(2);
    deltaSigmaStr.Form("%6.2f\n",deltaSigma);
    strippingLevelXiLLMassHist->Draw();
    text = pt->AddText("#sigma  =  ("+sigmaStr+"  #pm"+deltaSigmaStr+") MeV");
    pt->Draw();       //to draw your text object
    c1.SaveAs("strippingLevelXiLLMassHist.png");

    strippingLevelXiDDMassHist->Draw();
    pt->Clear();
    strippingLevelXiDDMassHist->Fit("myXiFit");
    pt->Clear();
    total = myXiFit->GetParameter(0);
    totalStr.Form("%4.0f\n",total);
    deltaTotal = myXiFit->GetParError(0);
    deltaTotalStr.Form("%4.0f\n",deltaTotal);
    text = pt->AddText("signal  =  "+totalStr+"  #pm"+deltaTotalStr);
    sigma = myXiFit->GetParameter(2);
    sigmaStr.Form("%6.2f\n",sigma);
    deltaSigma = myXiFit->GetParError(2);
    deltaSigmaStr.Form("%6.2f\n",deltaSigma);
    text = pt->AddText("#sigma  =  ("+sigmaStr+"  #pm"+deltaSigmaStr+") MeV");
    pt->Draw();  
    c1.SaveAs("strippingLevelXiDDMassHist.png");

    xiLLgoodPromptPi->Draw();
    pt->Clear();
    xiLLgoodPromptPi->Fit("myXiFit");
    pt->Clear();
    total = myXiFit->GetParameter(0);
    totalStr.Form("%4.0f\n",total);
    deltaTotal = myXiFit->GetParError(0);
    deltaTotalStr.Form("%4.0f\n",deltaTotal);
    text = pt->AddText("signal  =  "+totalStr+"  #pm"+deltaTotalStr);
    sigma = myXiFit->GetParameter(2);
    sigmaStr.Form("%6.2f\n",sigma);
    deltaSigma = myXiFit->GetParError(2);
    deltaSigmaStr.Form("%6.2f\n",deltaSigma);
    text = pt->AddText("#sigma  =  ("+sigmaStr+"  #pm"+deltaSigmaStr+") MeV");
    pt->Draw();
    c1.SaveAs("xiLLgoodPromptPi.png");


    xiDDgoodPromptPi->Draw();
    pt->Clear();
    xiDDgoodPromptPi->Fit("myXiFit");
    pt->Clear();
    total = myXiFit->GetParameter(0);
    totalStr.Form("%4.0f\n",total);
    deltaTotal = myXiFit->GetParError(0);
    deltaTotalStr.Form("%4.0f\n",deltaTotal);
    text = pt->AddText("signal  =  "+totalStr+"  #pm"+deltaTotalStr);
    sigma = myXiFit->GetParameter(2);
    sigmaStr.Form("%6.2f\n",sigma);
    deltaSigma = myXiFit->GetParError(2);
    deltaSigmaStr.Form("%6.2f\n",deltaSigma);
    text = pt->AddText("#sigma  =  ("+sigmaStr+"  #pm"+deltaSigmaStr+") MeV");
    pt->Draw();
    c1.SaveAs("xiDDgoodPromptPi.png");


}
