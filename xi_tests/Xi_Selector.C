#define Xi_Selector_cxx
// The class definition in Xi_Selector.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("Xi_Selector.C")
// root> T->Process("Xi_Selector.C","some options")
// root> T->Process("Xi_Selector.C+")
//


#include "Xi_Selector.h"
#include <TH2.h>
#include <TH1.h>
#include <TStyle.h>


void Xi_Selector::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

}

void Xi_Selector::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();

   LamMLL = new TH1D("LamMLL", "Lambda mass LL", 150, 1108.5, 1122.5); 
   LamMDD = new TH1D("LamMDD", "Lambda mass DD", 150, 1108.5, 1122.5); 

   fOutput->Add(LamMLL);
   fOutput->Add(LamMDD);
}

Bool_t Xi_Selector::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

   fReader.SetEntry(entry);

   GetEntry(entry);

   if(*DecayPr_TRACK_Type == 3)
       LamMLL->Fill(*Lambda_M);
   else if (*DecayPr_TRACK_Type == 5)
       LamMDD->Fill(*Lambda_M);

   return kTRUE;
}

void Xi_Selector::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.

}

void Xi_Selector::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

    gStyle->SetPalette(kViridis);
    TCanvas *C = new TCanvas();
    
    gStyle->SetOptTitle(kFALSE);
    gStyle->SetOptStat(0);

    LamMDD->Draw("");
    LamMLL->Draw("SAME");
    gPad->BuildLegend();

}
