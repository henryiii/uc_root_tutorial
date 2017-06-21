#define Xi_Analysis_cxx
#include "Xi_Analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


void Xi_Analysis::Loop()
{
//   In a ROOT session, you can do:
//      root> .L Xi_Analysis.C
//      root> Xi_Analysis t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
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

   auto LamMLL = new TH1D("LamMLL", "Lambda mass LL", 150, 1108.5, 1122.5); 
   auto LamMDD = new TH1D("LamMDD", "Lambda mass DD", 150, 1108.5, 1122.5); 

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(DecayPr_TRACK_Type == 3)
         LamMLL->Fill(Lambda_M);
      else if (DecayPr_TRACK_Type == 5)
         LamMDD->Fill(Lambda_M);
      // if (Cut(ientry) < 0) continue;
   }

    gStyle->SetPalette(kViridis);
    TCanvas *C = new TCanvas();
    
    gStyle->SetOptTitle(kFALSE);
    gStyle->SetOptStat(0);

    LamMDD->Draw("");
    LamMLL->Draw("SAME");
    gPad->BuildLegend();
}
