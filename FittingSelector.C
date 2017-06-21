#define FittingSelector_cxx
// To use this file, try the following session on your Tree T:
//
// root> T->Process("FittingSelector.C")
// root> T->Process("FittingSelector.C+")

#include "FittingSelector.h"
#include "fit1MeV_Gaussian.C"


// Adding includes so that this can also be compiled
#include <TH1.h>
#include <TF1.h>
#include <TText.h>
#include <TPaveText.h>
#include <TCanvas.h>
#include <TStyle.h>


// Defining histograms.
// Could also be done in the header (must be done that way for PROOF)

TH1 * strippingLevelXiLLMassHist = nullptr;
TH1 * strippingLevelXiDDMassHist = nullptr;
TH1 * xiLLgoodPromptPi = nullptr;
TH1 * xiDDgoodPromptPi = nullptr;


// Constants to make the code clearer
const int TRACK_LONG = 3;
const int TRACK_DOWN = 5;

void FittingSelector::Begin(TTree * /*tree*/) {
    TString option = GetOption();
}

void FittingSelector::SlaveBegin(TTree * /*tree*/) {
    TString option = GetOption();

    // Adding the empty histograms to fill
    strippingLevelXiLLMassHist = new TH1D("LambdaLL,pi mass","LL: stripping level cuts",40,1302.,1342.);
    strippingLevelXiDDMassHist = new TH1D("LambdaDD,pi mass","DD: stripping level cuts",40,1302.,1342.);
    xiLLgoodPromptPi = new TH1D("LambdaLL,pi mass","LL: after some cuts",40,1302.,1342.);
    xiDDgoodPromptPi = new TH1D("LambdaDD,pi mass","DD: after some cuts",40,1302.,1342.);
}

Bool_t FittingSelector::Process(Long64_t entry) {

    fReader.SetEntry(entry);

    // Always need something link this
    GetEntry(entry);

    bool GoodLambdaLL = (
          (*Xi_MM > 1302. && *Xi_MM < 1342.)
       && (*DecayPr_TRACK_Type == TRACK_LONG)
       && (*DecayPr_TRACK_GhostProb < 0.25)
       && (*DecayPi_TRACK_GhostProb < 0.25)
       && (*DecayPr_ProbNNp > 0.2)
       && (*Lambda_ENDVERTEX_Z > -100. && *Lambda_ENDVERTEX_Z < 400.)
       && (*Lambda_MM > 1110. && *Lambda_MM < 1121.)
    ); 

    bool GoodLambdaDD = (
           (*Xi_MM > 1302. && *Xi_MM < 1342.)
        && (*DecayPr_TRACK_Type == TRACK_DOWN)
        && (*DecayPr_ProbNNp > 0.05)
        && (*Lambda_ENDVERTEX_Z < 2275.)
        && (*Lambda_MM > 1110. && *Lambda_MM < 1121.)
    );


    if (*DecayPr_TRACK_Type == TRACK_LONG)
        strippingLevelXiLLMassHist->Fill(*Xi_MM);
    
    if (*DecayPr_TRACK_Type == TRACK_DOWN)
        strippingLevelXiDDMassHist->Fill(*Xi_MM);

    double deltaZ = *Lambda_ENDVERTEX_Z - *Xi_ENDVERTEX_Z;
    // Unused: double pvDeltaZ = *Xi_ENDVERTEX_Z - *Xi_OWNPV_Z;

    bool PromptLongPiLowGP = (
           (*PromptPi_TRACK_Type == TRACK_LONG)
        && (deltaZ > 0.)
        && (*PromptPi_TRACK_GhostProb < 0.3)
    );

    if (GoodLambdaLL && PromptLongPiLowGP)
        xiLLgoodPromptPi->Fill(*Xi_MM);

    if (GoodLambdaDD && PromptLongPiLowGP)
        xiDDgoodPromptPi->Fill(*Xi_MM);

    return kTRUE;
}

void FittingSelector::SlaveTerminate() {}

void FittingSelector::Terminate() {
    
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
    TText* text;

    // Prettier styles
    TStyle *myDefaultStyle = new TStyle("myDefaultStyle","my local default style");
    myDefaultStyle->SetTitleSize(0.06);
    myDefaultStyle->SetTitleOffset(0.75);
    myDefaultStyle->SetLabelFont(62);
    myDefaultStyle->SetLineWidth(2);
    myDefaultStyle->SetLineColor(kBlue+2);
    myDefaultStyle->SetHistMinimumZero(kTRUE);
    myDefaultStyle->cd();

    // Make a canvas to draw on
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
    text = pt->AddText("signal  =  "+totalStr+"  #pm"+deltaTotalStr);
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
