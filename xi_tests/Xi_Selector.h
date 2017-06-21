//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jun 19 23:03:03 2017 by ROOT version 6.10/00
// from TTree XiDecayTuple/XiDecayTuple
// found on file: DVntuple-March04A.root
//////////////////////////////////////////////////////////

#ifndef Xi_Selector_h
#define Xi_Selector_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector


class Xi_Selector : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain


   TH1D *LamMLL = nullptr;
   TH1D *LamMDD = nullptr;

   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_X = {fReader, "Xi_ENDVERTEX_X"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_Y = {fReader, "Xi_ENDVERTEX_Y"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_Z = {fReader, "Xi_ENDVERTEX_Z"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_XERR = {fReader, "Xi_ENDVERTEX_XERR"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_YERR = {fReader, "Xi_ENDVERTEX_YERR"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_ZERR = {fReader, "Xi_ENDVERTEX_ZERR"};
   TTreeReaderValue<Double_t> Xi_ENDVERTEX_CHI2 = {fReader, "Xi_ENDVERTEX_CHI2"};
   TTreeReaderValue<Int_t> Xi_ENDVERTEX_NDOF = {fReader, "Xi_ENDVERTEX_NDOF"};
   TTreeReaderValue<Double_t> Xi_OWNPV_X = {fReader, "Xi_OWNPV_X"};
   TTreeReaderValue<Double_t> Xi_OWNPV_Y = {fReader, "Xi_OWNPV_Y"};
   TTreeReaderValue<Double_t> Xi_OWNPV_Z = {fReader, "Xi_OWNPV_Z"};
   TTreeReaderValue<Double_t> Xi_OWNPV_XERR = {fReader, "Xi_OWNPV_XERR"};
   TTreeReaderValue<Double_t> Xi_OWNPV_YERR = {fReader, "Xi_OWNPV_YERR"};
   TTreeReaderValue<Double_t> Xi_OWNPV_ZERR = {fReader, "Xi_OWNPV_ZERR"};
   TTreeReaderValue<Double_t> Xi_OWNPV_CHI2 = {fReader, "Xi_OWNPV_CHI2"};
   TTreeReaderValue<Int_t> Xi_OWNPV_NDOF = {fReader, "Xi_OWNPV_NDOF"};
   TTreeReaderValue<Double_t> Xi_IP_OWNPV = {fReader, "Xi_IP_OWNPV"};
   TTreeReaderValue<Double_t> Xi_IPCHI2_OWNPV = {fReader, "Xi_IPCHI2_OWNPV"};
   TTreeReaderValue<Double_t> Xi_FD_OWNPV = {fReader, "Xi_FD_OWNPV"};
   TTreeReaderValue<Double_t> Xi_FDCHI2_OWNPV = {fReader, "Xi_FDCHI2_OWNPV"};
   TTreeReaderValue<Double_t> Xi_DIRA_OWNPV = {fReader, "Xi_DIRA_OWNPV"};
   TTreeReaderValue<Double_t> Xi_P = {fReader, "Xi_P"};
   TTreeReaderValue<Double_t> Xi_PT = {fReader, "Xi_PT"};
   TTreeReaderValue<Double_t> Xi_PE = {fReader, "Xi_PE"};
   TTreeReaderValue<Double_t> Xi_PX = {fReader, "Xi_PX"};
   TTreeReaderValue<Double_t> Xi_PY = {fReader, "Xi_PY"};
   TTreeReaderValue<Double_t> Xi_PZ = {fReader, "Xi_PZ"};
   TTreeReaderValue<Double_t> Xi_MM = {fReader, "Xi_MM"};
   TTreeReaderValue<Double_t> Xi_MMERR = {fReader, "Xi_MMERR"};
   TTreeReaderValue<Double_t> Xi_M = {fReader, "Xi_M"};
   TTreeReaderValue<Int_t> Xi_ID = {fReader, "Xi_ID"};
   TTreeReaderValue<Double_t> Xi_TAU = {fReader, "Xi_TAU"};
   TTreeReaderValue<Double_t> Xi_TAUERR = {fReader, "Xi_TAUERR"};
   TTreeReaderValue<Double_t> Xi_TAUCHI2 = {fReader, "Xi_TAUCHI2"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_X = {fReader, "PromptPi_OWNPV_X"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_Y = {fReader, "PromptPi_OWNPV_Y"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_Z = {fReader, "PromptPi_OWNPV_Z"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_XERR = {fReader, "PromptPi_OWNPV_XERR"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_YERR = {fReader, "PromptPi_OWNPV_YERR"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_ZERR = {fReader, "PromptPi_OWNPV_ZERR"};
   TTreeReaderValue<Double_t> PromptPi_OWNPV_CHI2 = {fReader, "PromptPi_OWNPV_CHI2"};
   TTreeReaderValue<Int_t> PromptPi_OWNPV_NDOF = {fReader, "PromptPi_OWNPV_NDOF"};
   TTreeReaderValue<Double_t> PromptPi_IP_OWNPV = {fReader, "PromptPi_IP_OWNPV"};
   TTreeReaderValue<Double_t> PromptPi_IPCHI2_OWNPV = {fReader, "PromptPi_IPCHI2_OWNPV"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_X = {fReader, "PromptPi_ORIVX_X"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_Y = {fReader, "PromptPi_ORIVX_Y"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_Z = {fReader, "PromptPi_ORIVX_Z"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_XERR = {fReader, "PromptPi_ORIVX_XERR"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_YERR = {fReader, "PromptPi_ORIVX_YERR"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_ZERR = {fReader, "PromptPi_ORIVX_ZERR"};
   TTreeReaderValue<Double_t> PromptPi_ORIVX_CHI2 = {fReader, "PromptPi_ORIVX_CHI2"};
   TTreeReaderValue<Int_t> PromptPi_ORIVX_NDOF = {fReader, "PromptPi_ORIVX_NDOF"};
   TTreeReaderValue<Double_t> PromptPi_P = {fReader, "PromptPi_P"};
   TTreeReaderValue<Double_t> PromptPi_PT = {fReader, "PromptPi_PT"};
   TTreeReaderValue<Double_t> PromptPi_PE = {fReader, "PromptPi_PE"};
   TTreeReaderValue<Double_t> PromptPi_PX = {fReader, "PromptPi_PX"};
   TTreeReaderValue<Double_t> PromptPi_PY = {fReader, "PromptPi_PY"};
   TTreeReaderValue<Double_t> PromptPi_PZ = {fReader, "PromptPi_PZ"};
   TTreeReaderValue<Double_t> PromptPi_M = {fReader, "PromptPi_M"};
   TTreeReaderValue<Int_t> PromptPi_ID = {fReader, "PromptPi_ID"};
   TTreeReaderValue<Double_t> PromptPi_PIDe = {fReader, "PromptPi_PIDe"};
   TTreeReaderValue<Double_t> PromptPi_PIDmu = {fReader, "PromptPi_PIDmu"};
   TTreeReaderValue<Double_t> PromptPi_PIDK = {fReader, "PromptPi_PIDK"};
   TTreeReaderValue<Double_t> PromptPi_PIDp = {fReader, "PromptPi_PIDp"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNe = {fReader, "PromptPi_ProbNNe"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNk = {fReader, "PromptPi_ProbNNk"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNp = {fReader, "PromptPi_ProbNNp"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNpi = {fReader, "PromptPi_ProbNNpi"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNmu = {fReader, "PromptPi_ProbNNmu"};
   TTreeReaderValue<Double_t> PromptPi_ProbNNghost = {fReader, "PromptPi_ProbNNghost"};
   TTreeReaderValue<Bool_t> PromptPi_hasMuon = {fReader, "PromptPi_hasMuon"};
   TTreeReaderValue<Bool_t> PromptPi_isMuon = {fReader, "PromptPi_isMuon"};
   TTreeReaderValue<Bool_t> PromptPi_hasRich = {fReader, "PromptPi_hasRich"};
   TTreeReaderValue<Bool_t> PromptPi_hasCalo = {fReader, "PromptPi_hasCalo"};
   TTreeReaderValue<Int_t> PromptPi_TRACK_Type = {fReader, "PromptPi_TRACK_Type"};
   TTreeReaderValue<Int_t> PromptPi_TRACK_Key = {fReader, "PromptPi_TRACK_Key"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_CHI2NDOF = {fReader, "PromptPi_TRACK_CHI2NDOF"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_PCHI2 = {fReader, "PromptPi_TRACK_PCHI2"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_MatchCHI2 = {fReader, "PromptPi_TRACK_MatchCHI2"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_GhostProb = {fReader, "PromptPi_TRACK_GhostProb"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_CloneDist = {fReader, "PromptPi_TRACK_CloneDist"};
   TTreeReaderValue<Double_t> PromptPi_TRACK_Likelihood = {fReader, "PromptPi_TRACK_Likelihood"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_X = {fReader, "Lambda_ENDVERTEX_X"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_Y = {fReader, "Lambda_ENDVERTEX_Y"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_Z = {fReader, "Lambda_ENDVERTEX_Z"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_XERR = {fReader, "Lambda_ENDVERTEX_XERR"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_YERR = {fReader, "Lambda_ENDVERTEX_YERR"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_ZERR = {fReader, "Lambda_ENDVERTEX_ZERR"};
   TTreeReaderValue<Double_t> Lambda_ENDVERTEX_CHI2 = {fReader, "Lambda_ENDVERTEX_CHI2"};
   TTreeReaderValue<Int_t> Lambda_ENDVERTEX_NDOF = {fReader, "Lambda_ENDVERTEX_NDOF"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_X = {fReader, "Lambda_OWNPV_X"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_Y = {fReader, "Lambda_OWNPV_Y"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_Z = {fReader, "Lambda_OWNPV_Z"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_XERR = {fReader, "Lambda_OWNPV_XERR"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_YERR = {fReader, "Lambda_OWNPV_YERR"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_ZERR = {fReader, "Lambda_OWNPV_ZERR"};
   TTreeReaderValue<Double_t> Lambda_OWNPV_CHI2 = {fReader, "Lambda_OWNPV_CHI2"};
   TTreeReaderValue<Int_t> Lambda_OWNPV_NDOF = {fReader, "Lambda_OWNPV_NDOF"};
   TTreeReaderValue<Double_t> Lambda_IP_OWNPV = {fReader, "Lambda_IP_OWNPV"};
   TTreeReaderValue<Double_t> Lambda_IPCHI2_OWNPV = {fReader, "Lambda_IPCHI2_OWNPV"};
   TTreeReaderValue<Double_t> Lambda_FD_OWNPV = {fReader, "Lambda_FD_OWNPV"};
   TTreeReaderValue<Double_t> Lambda_FDCHI2_OWNPV = {fReader, "Lambda_FDCHI2_OWNPV"};
   TTreeReaderValue<Double_t> Lambda_DIRA_OWNPV = {fReader, "Lambda_DIRA_OWNPV"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_X = {fReader, "Lambda_ORIVX_X"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_Y = {fReader, "Lambda_ORIVX_Y"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_Z = {fReader, "Lambda_ORIVX_Z"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_XERR = {fReader, "Lambda_ORIVX_XERR"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_YERR = {fReader, "Lambda_ORIVX_YERR"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_ZERR = {fReader, "Lambda_ORIVX_ZERR"};
   TTreeReaderValue<Double_t> Lambda_ORIVX_CHI2 = {fReader, "Lambda_ORIVX_CHI2"};
   TTreeReaderValue<Int_t> Lambda_ORIVX_NDOF = {fReader, "Lambda_ORIVX_NDOF"};
   TTreeReaderValue<Double_t> Lambda_FD_ORIVX = {fReader, "Lambda_FD_ORIVX"};
   TTreeReaderValue<Double_t> Lambda_FDCHI2_ORIVX = {fReader, "Lambda_FDCHI2_ORIVX"};
   TTreeReaderValue<Double_t> Lambda_DIRA_ORIVX = {fReader, "Lambda_DIRA_ORIVX"};
   TTreeReaderValue<Double_t> Lambda_P = {fReader, "Lambda_P"};
   TTreeReaderValue<Double_t> Lambda_PT = {fReader, "Lambda_PT"};
   TTreeReaderValue<Double_t> Lambda_PE = {fReader, "Lambda_PE"};
   TTreeReaderValue<Double_t> Lambda_PX = {fReader, "Lambda_PX"};
   TTreeReaderValue<Double_t> Lambda_PY = {fReader, "Lambda_PY"};
   TTreeReaderValue<Double_t> Lambda_PZ = {fReader, "Lambda_PZ"};
   TTreeReaderValue<Double_t> Lambda_MM = {fReader, "Lambda_MM"};
   TTreeReaderValue<Double_t> Lambda_MMERR = {fReader, "Lambda_MMERR"};
   TTreeReaderValue<Double_t> Lambda_M = {fReader, "Lambda_M"};
   TTreeReaderValue<Int_t> Lambda_ID = {fReader, "Lambda_ID"};
   TTreeReaderValue<Double_t> Lambda_TAU = {fReader, "Lambda_TAU"};
   TTreeReaderValue<Double_t> Lambda_TAUERR = {fReader, "Lambda_TAUERR"};
   TTreeReaderValue<Double_t> Lambda_TAUCHI2 = {fReader, "Lambda_TAUCHI2"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_X = {fReader, "DecayPi_OWNPV_X"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_Y = {fReader, "DecayPi_OWNPV_Y"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_Z = {fReader, "DecayPi_OWNPV_Z"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_XERR = {fReader, "DecayPi_OWNPV_XERR"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_YERR = {fReader, "DecayPi_OWNPV_YERR"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_ZERR = {fReader, "DecayPi_OWNPV_ZERR"};
   TTreeReaderValue<Double_t> DecayPi_OWNPV_CHI2 = {fReader, "DecayPi_OWNPV_CHI2"};
   TTreeReaderValue<Int_t> DecayPi_OWNPV_NDOF = {fReader, "DecayPi_OWNPV_NDOF"};
   TTreeReaderValue<Double_t> DecayPi_IP_OWNPV = {fReader, "DecayPi_IP_OWNPV"};
   TTreeReaderValue<Double_t> DecayPi_IPCHI2_OWNPV = {fReader, "DecayPi_IPCHI2_OWNPV"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_X = {fReader, "DecayPi_ORIVX_X"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_Y = {fReader, "DecayPi_ORIVX_Y"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_Z = {fReader, "DecayPi_ORIVX_Z"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_XERR = {fReader, "DecayPi_ORIVX_XERR"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_YERR = {fReader, "DecayPi_ORIVX_YERR"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_ZERR = {fReader, "DecayPi_ORIVX_ZERR"};
   TTreeReaderValue<Double_t> DecayPi_ORIVX_CHI2 = {fReader, "DecayPi_ORIVX_CHI2"};
   TTreeReaderValue<Int_t> DecayPi_ORIVX_NDOF = {fReader, "DecayPi_ORIVX_NDOF"};
   TTreeReaderValue<Double_t> DecayPi_P = {fReader, "DecayPi_P"};
   TTreeReaderValue<Double_t> DecayPi_PT = {fReader, "DecayPi_PT"};
   TTreeReaderValue<Double_t> DecayPi_PE = {fReader, "DecayPi_PE"};
   TTreeReaderValue<Double_t> DecayPi_PX = {fReader, "DecayPi_PX"};
   TTreeReaderValue<Double_t> DecayPi_PY = {fReader, "DecayPi_PY"};
   TTreeReaderValue<Double_t> DecayPi_PZ = {fReader, "DecayPi_PZ"};
   TTreeReaderValue<Double_t> DecayPi_M = {fReader, "DecayPi_M"};
   TTreeReaderValue<Int_t> DecayPi_ID = {fReader, "DecayPi_ID"};
   TTreeReaderValue<Double_t> DecayPi_PIDe = {fReader, "DecayPi_PIDe"};
   TTreeReaderValue<Double_t> DecayPi_PIDmu = {fReader, "DecayPi_PIDmu"};
   TTreeReaderValue<Double_t> DecayPi_PIDK = {fReader, "DecayPi_PIDK"};
   TTreeReaderValue<Double_t> DecayPi_PIDp = {fReader, "DecayPi_PIDp"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNe = {fReader, "DecayPi_ProbNNe"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNk = {fReader, "DecayPi_ProbNNk"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNp = {fReader, "DecayPi_ProbNNp"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNpi = {fReader, "DecayPi_ProbNNpi"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNmu = {fReader, "DecayPi_ProbNNmu"};
   TTreeReaderValue<Double_t> DecayPi_ProbNNghost = {fReader, "DecayPi_ProbNNghost"};
   TTreeReaderValue<Bool_t> DecayPi_hasMuon = {fReader, "DecayPi_hasMuon"};
   TTreeReaderValue<Bool_t> DecayPi_isMuon = {fReader, "DecayPi_isMuon"};
   TTreeReaderValue<Bool_t> DecayPi_hasRich = {fReader, "DecayPi_hasRich"};
   TTreeReaderValue<Bool_t> DecayPi_hasCalo = {fReader, "DecayPi_hasCalo"};
   TTreeReaderValue<Int_t> DecayPi_TRACK_Type = {fReader, "DecayPi_TRACK_Type"};
   TTreeReaderValue<Int_t> DecayPi_TRACK_Key = {fReader, "DecayPi_TRACK_Key"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_CHI2NDOF = {fReader, "DecayPi_TRACK_CHI2NDOF"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_PCHI2 = {fReader, "DecayPi_TRACK_PCHI2"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_MatchCHI2 = {fReader, "DecayPi_TRACK_MatchCHI2"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_GhostProb = {fReader, "DecayPi_TRACK_GhostProb"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_CloneDist = {fReader, "DecayPi_TRACK_CloneDist"};
   TTreeReaderValue<Double_t> DecayPi_TRACK_Likelihood = {fReader, "DecayPi_TRACK_Likelihood"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_X = {fReader, "DecayPr_OWNPV_X"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_Y = {fReader, "DecayPr_OWNPV_Y"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_Z = {fReader, "DecayPr_OWNPV_Z"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_XERR = {fReader, "DecayPr_OWNPV_XERR"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_YERR = {fReader, "DecayPr_OWNPV_YERR"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_ZERR = {fReader, "DecayPr_OWNPV_ZERR"};
   TTreeReaderValue<Double_t> DecayPr_OWNPV_CHI2 = {fReader, "DecayPr_OWNPV_CHI2"};
   TTreeReaderValue<Int_t> DecayPr_OWNPV_NDOF = {fReader, "DecayPr_OWNPV_NDOF"};
   TTreeReaderValue<Double_t> DecayPr_IP_OWNPV = {fReader, "DecayPr_IP_OWNPV"};
   TTreeReaderValue<Double_t> DecayPr_IPCHI2_OWNPV = {fReader, "DecayPr_IPCHI2_OWNPV"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_X = {fReader, "DecayPr_ORIVX_X"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_Y = {fReader, "DecayPr_ORIVX_Y"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_Z = {fReader, "DecayPr_ORIVX_Z"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_XERR = {fReader, "DecayPr_ORIVX_XERR"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_YERR = {fReader, "DecayPr_ORIVX_YERR"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_ZERR = {fReader, "DecayPr_ORIVX_ZERR"};
   TTreeReaderValue<Double_t> DecayPr_ORIVX_CHI2 = {fReader, "DecayPr_ORIVX_CHI2"};
   TTreeReaderValue<Int_t> DecayPr_ORIVX_NDOF = {fReader, "DecayPr_ORIVX_NDOF"};
   TTreeReaderValue<Double_t> DecayPr_P = {fReader, "DecayPr_P"};
   TTreeReaderValue<Double_t> DecayPr_PT = {fReader, "DecayPr_PT"};
   TTreeReaderValue<Double_t> DecayPr_PE = {fReader, "DecayPr_PE"};
   TTreeReaderValue<Double_t> DecayPr_PX = {fReader, "DecayPr_PX"};
   TTreeReaderValue<Double_t> DecayPr_PY = {fReader, "DecayPr_PY"};
   TTreeReaderValue<Double_t> DecayPr_PZ = {fReader, "DecayPr_PZ"};
   TTreeReaderValue<Double_t> DecayPr_M = {fReader, "DecayPr_M"};
   TTreeReaderValue<Int_t> DecayPr_ID = {fReader, "DecayPr_ID"};
   TTreeReaderValue<Double_t> DecayPr_PIDe = {fReader, "DecayPr_PIDe"};
   TTreeReaderValue<Double_t> DecayPr_PIDmu = {fReader, "DecayPr_PIDmu"};
   TTreeReaderValue<Double_t> DecayPr_PIDK = {fReader, "DecayPr_PIDK"};
   TTreeReaderValue<Double_t> DecayPr_PIDp = {fReader, "DecayPr_PIDp"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNe = {fReader, "DecayPr_ProbNNe"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNk = {fReader, "DecayPr_ProbNNk"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNp = {fReader, "DecayPr_ProbNNp"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNpi = {fReader, "DecayPr_ProbNNpi"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNmu = {fReader, "DecayPr_ProbNNmu"};
   TTreeReaderValue<Double_t> DecayPr_ProbNNghost = {fReader, "DecayPr_ProbNNghost"};
   TTreeReaderValue<Bool_t> DecayPr_hasMuon = {fReader, "DecayPr_hasMuon"};
   TTreeReaderValue<Bool_t> DecayPr_isMuon = {fReader, "DecayPr_isMuon"};
   TTreeReaderValue<Bool_t> DecayPr_hasRich = {fReader, "DecayPr_hasRich"};
   TTreeReaderValue<Bool_t> DecayPr_hasCalo = {fReader, "DecayPr_hasCalo"};
   TTreeReaderValue<Int_t> DecayPr_TRACK_Type = {fReader, "DecayPr_TRACK_Type"};
   TTreeReaderValue<Int_t> DecayPr_TRACK_Key = {fReader, "DecayPr_TRACK_Key"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_CHI2NDOF = {fReader, "DecayPr_TRACK_CHI2NDOF"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_PCHI2 = {fReader, "DecayPr_TRACK_PCHI2"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_MatchCHI2 = {fReader, "DecayPr_TRACK_MatchCHI2"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_GhostProb = {fReader, "DecayPr_TRACK_GhostProb"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_CloneDist = {fReader, "DecayPr_TRACK_CloneDist"};
   TTreeReaderValue<Double_t> DecayPr_TRACK_Likelihood = {fReader, "DecayPr_TRACK_Likelihood"};
   TTreeReaderValue<UInt_t> nCandidate = {fReader, "nCandidate"};
   TTreeReaderValue<ULong64_t> totCandidates = {fReader, "totCandidates"};
   TTreeReaderValue<ULong64_t> EventInSequence = {fReader, "EventInSequence"};
   TTreeReaderValue<UInt_t> runNumber = {fReader, "runNumber"};
   TTreeReaderValue<ULong64_t> eventNumber = {fReader, "eventNumber"};
   TTreeReaderValue<UInt_t> BCID = {fReader, "BCID"};
   TTreeReaderValue<Int_t> BCType = {fReader, "BCType"};
   TTreeReaderValue<UInt_t> OdinTCK = {fReader, "OdinTCK"};
   TTreeReaderValue<UInt_t> L0DUTCK = {fReader, "L0DUTCK"};
   TTreeReaderValue<UInt_t> HLTTCK = {fReader, "HLTTCK"};
   TTreeReaderValue<ULong64_t> GpsTime = {fReader, "GpsTime"};
   TTreeReaderValue<Short_t> Polarity = {fReader, "Polarity"};
   TTreeReaderValue<Int_t> nPV = {fReader, "nPV"};
   TTreeReaderArray<Float_t> PVX = {fReader, "PVX"};
   TTreeReaderArray<Float_t> PVY = {fReader, "PVY"};
   TTreeReaderArray<Float_t> PVZ = {fReader, "PVZ"};
   TTreeReaderArray<Float_t> PVXERR = {fReader, "PVXERR"};
   TTreeReaderArray<Float_t> PVYERR = {fReader, "PVYERR"};
   TTreeReaderArray<Float_t> PVZERR = {fReader, "PVZERR"};
   TTreeReaderArray<Float_t> PVCHI2 = {fReader, "PVCHI2"};
   TTreeReaderArray<Float_t> PVNDOF = {fReader, "PVNDOF"};
   TTreeReaderArray<Float_t> PVNTRACKS = {fReader, "PVNTRACKS"};


   Xi_Selector(TTree * /*tree*/ =0) { }
   virtual ~Xi_Selector() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(Xi_Selector,0);

};

#endif

#ifdef Xi_Selector_cxx
void Xi_Selector::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);
}

Bool_t Xi_Selector::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef Xi_Selector_cxx
