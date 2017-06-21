//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct  2 14:11:00 2013 by ROOT version 5.27/02
// from TTree XiDecayTuple/XiDecayTuple
// found on file: DVntuple-March04A.root
//////////////////////////////////////////////////////////

#ifndef FittingExample_h
#define FittingExample_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
   const Int_t kMaxXi_ENDVERTEX_COV = 1;
   const Int_t kMaxXi_OWNPV_COV = 1;
   const Int_t kMaxPromptPi_OWNPV_COV = 1;
   const Int_t kMaxPromptPi_ORIVX_COV = 1;
   const Int_t kMaxLambda_ENDVERTEX_COV = 1;
   const Int_t kMaxLambda_OWNPV_COV = 1;
   const Int_t kMaxLambda_ORIVX_COV = 1;
   const Int_t kMaxDecayPi_OWNPV_COV = 1;
   const Int_t kMaxDecayPi_ORIVX_COV = 1;
   const Int_t kMaxDecayPr_OWNPV_COV = 1;
   const Int_t kMaxDecayPr_ORIVX_COV = 1;

class FittingExample {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Double_t        Xi_ENDVERTEX_X;
   Double_t        Xi_ENDVERTEX_Y;
   Double_t        Xi_ENDVERTEX_Z;
   Double_t        Xi_ENDVERTEX_XERR;
   Double_t        Xi_ENDVERTEX_YERR;
   Double_t        Xi_ENDVERTEX_ZERR;
   Double_t        Xi_ENDVERTEX_CHI2;
   Int_t           Xi_ENDVERTEX_NDOF;
   Float_t         Xi_ENDVERTEX_COV_[3][3];
   Double_t        Xi_OWNPV_X;
   Double_t        Xi_OWNPV_Y;
   Double_t        Xi_OWNPV_Z;
   Double_t        Xi_OWNPV_XERR;
   Double_t        Xi_OWNPV_YERR;
   Double_t        Xi_OWNPV_ZERR;
   Double_t        Xi_OWNPV_CHI2;
   Int_t           Xi_OWNPV_NDOF;
   Float_t         Xi_OWNPV_COV_[3][3];
   Double_t        Xi_IP_OWNPV;
   Double_t        Xi_IPCHI2_OWNPV;
   Double_t        Xi_FD_OWNPV;
   Double_t        Xi_FDCHI2_OWNPV;
   Double_t        Xi_DIRA_OWNPV;
   Double_t        Xi_P;
   Double_t        Xi_PT;
   Double_t        Xi_PE;
   Double_t        Xi_PX;
   Double_t        Xi_PY;
   Double_t        Xi_PZ;
   Double_t        Xi_MM;
   Double_t        Xi_MMERR;
   Double_t        Xi_M;
   Int_t           Xi_ID;
   Double_t        Xi_TAU;
   Double_t        Xi_TAUERR;
   Double_t        Xi_TAUCHI2;
   Double_t        PromptPi_OWNPV_X;
   Double_t        PromptPi_OWNPV_Y;
   Double_t        PromptPi_OWNPV_Z;
   Double_t        PromptPi_OWNPV_XERR;
   Double_t        PromptPi_OWNPV_YERR;
   Double_t        PromptPi_OWNPV_ZERR;
   Double_t        PromptPi_OWNPV_CHI2;
   Int_t           PromptPi_OWNPV_NDOF;
   Float_t         PromptPi_OWNPV_COV_[3][3];
   Double_t        PromptPi_IP_OWNPV;
   Double_t        PromptPi_IPCHI2_OWNPV;
   Double_t        PromptPi_ORIVX_X;
   Double_t        PromptPi_ORIVX_Y;
   Double_t        PromptPi_ORIVX_Z;
   Double_t        PromptPi_ORIVX_XERR;
   Double_t        PromptPi_ORIVX_YERR;
   Double_t        PromptPi_ORIVX_ZERR;
   Double_t        PromptPi_ORIVX_CHI2;
   Int_t           PromptPi_ORIVX_NDOF;
   Float_t         PromptPi_ORIVX_COV_[3][3];
   Double_t        PromptPi_P;
   Double_t        PromptPi_PT;
   Double_t        PromptPi_PE;
   Double_t        PromptPi_PX;
   Double_t        PromptPi_PY;
   Double_t        PromptPi_PZ;
   Double_t        PromptPi_M;
   Int_t           PromptPi_ID;
   Double_t        PromptPi_PIDe;
   Double_t        PromptPi_PIDmu;
   Double_t        PromptPi_PIDK;
   Double_t        PromptPi_PIDp;
   Double_t        PromptPi_ProbNNe;
   Double_t        PromptPi_ProbNNk;
   Double_t        PromptPi_ProbNNp;
   Double_t        PromptPi_ProbNNpi;
   Double_t        PromptPi_ProbNNmu;
   Double_t        PromptPi_ProbNNghost;
   Bool_t          PromptPi_hasMuon;
   Bool_t          PromptPi_isMuon;
   Bool_t          PromptPi_hasRich;
   Bool_t          PromptPi_hasCalo;
   Int_t           PromptPi_TRACK_Type;
   Int_t           PromptPi_TRACK_Key;
   Double_t        PromptPi_TRACK_CHI2NDOF;
   Double_t        PromptPi_TRACK_PCHI2;
   Double_t        PromptPi_TRACK_MatchCHI2;
   Double_t        PromptPi_TRACK_GhostProb;
   Double_t        PromptPi_TRACK_CloneDist;
   Double_t        PromptPi_TRACK_Likelihood;
   Double_t        Lambda_ENDVERTEX_X;
   Double_t        Lambda_ENDVERTEX_Y;
   Double_t        Lambda_ENDVERTEX_Z;
   Double_t        Lambda_ENDVERTEX_XERR;
   Double_t        Lambda_ENDVERTEX_YERR;
   Double_t        Lambda_ENDVERTEX_ZERR;
   Double_t        Lambda_ENDVERTEX_CHI2;
   Int_t           Lambda_ENDVERTEX_NDOF;
   Float_t         Lambda_ENDVERTEX_COV_[3][3];
   Double_t        Lambda_OWNPV_X;
   Double_t        Lambda_OWNPV_Y;
   Double_t        Lambda_OWNPV_Z;
   Double_t        Lambda_OWNPV_XERR;
   Double_t        Lambda_OWNPV_YERR;
   Double_t        Lambda_OWNPV_ZERR;
   Double_t        Lambda_OWNPV_CHI2;
   Int_t           Lambda_OWNPV_NDOF;
   Float_t         Lambda_OWNPV_COV_[3][3];
   Double_t        Lambda_IP_OWNPV;
   Double_t        Lambda_IPCHI2_OWNPV;
   Double_t        Lambda_FD_OWNPV;
   Double_t        Lambda_FDCHI2_OWNPV;
   Double_t        Lambda_DIRA_OWNPV;
   Double_t        Lambda_ORIVX_X;
   Double_t        Lambda_ORIVX_Y;
   Double_t        Lambda_ORIVX_Z;
   Double_t        Lambda_ORIVX_XERR;
   Double_t        Lambda_ORIVX_YERR;
   Double_t        Lambda_ORIVX_ZERR;
   Double_t        Lambda_ORIVX_CHI2;
   Int_t           Lambda_ORIVX_NDOF;
   Float_t         Lambda_ORIVX_COV_[3][3];
   Double_t        Lambda_FD_ORIVX;
   Double_t        Lambda_FDCHI2_ORIVX;
   Double_t        Lambda_DIRA_ORIVX;
   Double_t        Lambda_P;
   Double_t        Lambda_PT;
   Double_t        Lambda_PE;
   Double_t        Lambda_PX;
   Double_t        Lambda_PY;
   Double_t        Lambda_PZ;
   Double_t        Lambda_MM;
   Double_t        Lambda_MMERR;
   Double_t        Lambda_M;
   Int_t           Lambda_ID;
   Double_t        Lambda_TAU;
   Double_t        Lambda_TAUERR;
   Double_t        Lambda_TAUCHI2;
   Double_t        DecayPi_OWNPV_X;
   Double_t        DecayPi_OWNPV_Y;
   Double_t        DecayPi_OWNPV_Z;
   Double_t        DecayPi_OWNPV_XERR;
   Double_t        DecayPi_OWNPV_YERR;
   Double_t        DecayPi_OWNPV_ZERR;
   Double_t        DecayPi_OWNPV_CHI2;
   Int_t           DecayPi_OWNPV_NDOF;
   Float_t         DecayPi_OWNPV_COV_[3][3];
   Double_t        DecayPi_IP_OWNPV;
   Double_t        DecayPi_IPCHI2_OWNPV;
   Double_t        DecayPi_ORIVX_X;
   Double_t        DecayPi_ORIVX_Y;
   Double_t        DecayPi_ORIVX_Z;
   Double_t        DecayPi_ORIVX_XERR;
   Double_t        DecayPi_ORIVX_YERR;
   Double_t        DecayPi_ORIVX_ZERR;
   Double_t        DecayPi_ORIVX_CHI2;
   Int_t           DecayPi_ORIVX_NDOF;
   Float_t         DecayPi_ORIVX_COV_[3][3];
   Double_t        DecayPi_P;
   Double_t        DecayPi_PT;
   Double_t        DecayPi_PE;
   Double_t        DecayPi_PX;
   Double_t        DecayPi_PY;
   Double_t        DecayPi_PZ;
   Double_t        DecayPi_M;
   Int_t           DecayPi_ID;
   Double_t        DecayPi_PIDe;
   Double_t        DecayPi_PIDmu;
   Double_t        DecayPi_PIDK;
   Double_t        DecayPi_PIDp;
   Double_t        DecayPi_ProbNNe;
   Double_t        DecayPi_ProbNNk;
   Double_t        DecayPi_ProbNNp;
   Double_t        DecayPi_ProbNNpi;
   Double_t        DecayPi_ProbNNmu;
   Double_t        DecayPi_ProbNNghost;
   Bool_t          DecayPi_hasMuon;
   Bool_t          DecayPi_isMuon;
   Bool_t          DecayPi_hasRich;
   Bool_t          DecayPi_hasCalo;
   Int_t           DecayPi_TRACK_Type;
   Int_t           DecayPi_TRACK_Key;
   Double_t        DecayPi_TRACK_CHI2NDOF;
   Double_t        DecayPi_TRACK_PCHI2;
   Double_t        DecayPi_TRACK_MatchCHI2;
   Double_t        DecayPi_TRACK_GhostProb;
   Double_t        DecayPi_TRACK_CloneDist;
   Double_t        DecayPi_TRACK_Likelihood;
   Double_t        DecayPr_OWNPV_X;
   Double_t        DecayPr_OWNPV_Y;
   Double_t        DecayPr_OWNPV_Z;
   Double_t        DecayPr_OWNPV_XERR;
   Double_t        DecayPr_OWNPV_YERR;
   Double_t        DecayPr_OWNPV_ZERR;
   Double_t        DecayPr_OWNPV_CHI2;
   Int_t           DecayPr_OWNPV_NDOF;
   Float_t         DecayPr_OWNPV_COV_[3][3];
   Double_t        DecayPr_IP_OWNPV;
   Double_t        DecayPr_IPCHI2_OWNPV;
   Double_t        DecayPr_ORIVX_X;
   Double_t        DecayPr_ORIVX_Y;
   Double_t        DecayPr_ORIVX_Z;
   Double_t        DecayPr_ORIVX_XERR;
   Double_t        DecayPr_ORIVX_YERR;
   Double_t        DecayPr_ORIVX_ZERR;
   Double_t        DecayPr_ORIVX_CHI2;
   Int_t           DecayPr_ORIVX_NDOF;
   Float_t         DecayPr_ORIVX_COV_[3][3];
   Double_t        DecayPr_P;
   Double_t        DecayPr_PT;
   Double_t        DecayPr_PE;
   Double_t        DecayPr_PX;
   Double_t        DecayPr_PY;
   Double_t        DecayPr_PZ;
   Double_t        DecayPr_M;
   Int_t           DecayPr_ID;
   Double_t        DecayPr_PIDe;
   Double_t        DecayPr_PIDmu;
   Double_t        DecayPr_PIDK;
   Double_t        DecayPr_PIDp;
   Double_t        DecayPr_ProbNNe;
   Double_t        DecayPr_ProbNNk;
   Double_t        DecayPr_ProbNNp;
   Double_t        DecayPr_ProbNNpi;
   Double_t        DecayPr_ProbNNmu;
   Double_t        DecayPr_ProbNNghost;
   Bool_t          DecayPr_hasMuon;
   Bool_t          DecayPr_isMuon;
   Bool_t          DecayPr_hasRich;
   Bool_t          DecayPr_hasCalo;
   Int_t           DecayPr_TRACK_Type;
   Int_t           DecayPr_TRACK_Key;
   Double_t        DecayPr_TRACK_CHI2NDOF;
   Double_t        DecayPr_TRACK_PCHI2;
   Double_t        DecayPr_TRACK_MatchCHI2;
   Double_t        DecayPr_TRACK_GhostProb;
   Double_t        DecayPr_TRACK_CloneDist;
   Double_t        DecayPr_TRACK_Likelihood;
   UInt_t          nCandidate;
   ULong64_t       totCandidates;
   ULong64_t       EventInSequence;
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          BCID;
   Int_t           BCType;
   UInt_t          OdinTCK;
   UInt_t          L0DUTCK;
   UInt_t          HLTTCK;
   ULong64_t       GpsTime;
   Short_t         Polarity;
   Int_t           nPV;
   Float_t         PVX[100];   //[nPV]
   Float_t         PVY[100];   //[nPV]
   Float_t         PVZ[100];   //[nPV]
   Float_t         PVXERR[100];   //[nPV]
   Float_t         PVYERR[100];   //[nPV]
   Float_t         PVZERR[100];   //[nPV]
   Float_t         PVCHI2[100];   //[nPV]
   Float_t         PVNDOF[100];   //[nPV]
   Float_t         PVNTRACKS[100];   //[nPV]

   // List of branches
   TBranch        *b_Xi_ENDVERTEX_X;   //!
   TBranch        *b_Xi_ENDVERTEX_Y;   //!
   TBranch        *b_Xi_ENDVERTEX_Z;   //!
   TBranch        *b_Xi_ENDVERTEX_XERR;   //!
   TBranch        *b_Xi_ENDVERTEX_YERR;   //!
   TBranch        *b_Xi_ENDVERTEX_ZERR;   //!
   TBranch        *b_Xi_ENDVERTEX_CHI2;   //!
   TBranch        *b_Xi_ENDVERTEX_NDOF;   //!
   TBranch        *b_Xi_ENDVERTEX_COV_;   //!
   TBranch        *b_Xi_OWNPV_X;   //!
   TBranch        *b_Xi_OWNPV_Y;   //!
   TBranch        *b_Xi_OWNPV_Z;   //!
   TBranch        *b_Xi_OWNPV_XERR;   //!
   TBranch        *b_Xi_OWNPV_YERR;   //!
   TBranch        *b_Xi_OWNPV_ZERR;   //!
   TBranch        *b_Xi_OWNPV_CHI2;   //!
   TBranch        *b_Xi_OWNPV_NDOF;   //!
   TBranch        *b_Xi_OWNPV_COV_;   //!
   TBranch        *b_Xi_IP_OWNPV;   //!
   TBranch        *b_Xi_IPCHI2_OWNPV;   //!
   TBranch        *b_Xi_FD_OWNPV;   //!
   TBranch        *b_Xi_FDCHI2_OWNPV;   //!
   TBranch        *b_Xi_DIRA_OWNPV;   //!
   TBranch        *b_Xi_P;   //!
   TBranch        *b_Xi_PT;   //!
   TBranch        *b_Xi_PE;   //!
   TBranch        *b_Xi_PX;   //!
   TBranch        *b_Xi_PY;   //!
   TBranch        *b_Xi_PZ;   //!
   TBranch        *b_Xi_MM;   //!
   TBranch        *b_Xi_MMERR;   //!
   TBranch        *b_Xi_M;   //!
   TBranch        *b_Xi_ID;   //!
   TBranch        *b_Xi_TAU;   //!
   TBranch        *b_Xi_TAUERR;   //!
   TBranch        *b_Xi_TAUCHI2;   //!
   TBranch        *b_PromptPi_OWNPV_X;   //!
   TBranch        *b_PromptPi_OWNPV_Y;   //!
   TBranch        *b_PromptPi_OWNPV_Z;   //!
   TBranch        *b_PromptPi_OWNPV_XERR;   //!
   TBranch        *b_PromptPi_OWNPV_YERR;   //!
   TBranch        *b_PromptPi_OWNPV_ZERR;   //!
   TBranch        *b_PromptPi_OWNPV_CHI2;   //!
   TBranch        *b_PromptPi_OWNPV_NDOF;   //!
   TBranch        *b_PromptPi_OWNPV_COV_;   //!
   TBranch        *b_PromptPi_IP_OWNPV;   //!
   TBranch        *b_PromptPi_IPCHI2_OWNPV;   //!
   TBranch        *b_PromptPi_ORIVX_X;   //!
   TBranch        *b_PromptPi_ORIVX_Y;   //!
   TBranch        *b_PromptPi_ORIVX_Z;   //!
   TBranch        *b_PromptPi_ORIVX_XERR;   //!
   TBranch        *b_PromptPi_ORIVX_YERR;   //!
   TBranch        *b_PromptPi_ORIVX_ZERR;   //!
   TBranch        *b_PromptPi_ORIVX_CHI2;   //!
   TBranch        *b_PromptPi_ORIVX_NDOF;   //!
   TBranch        *b_PromptPi_ORIVX_COV_;   //!
   TBranch        *b_PromptPi_P;   //!
   TBranch        *b_PromptPi_PT;   //!
   TBranch        *b_PromptPi_PE;   //!
   TBranch        *b_PromptPi_PX;   //!
   TBranch        *b_PromptPi_PY;   //!
   TBranch        *b_PromptPi_PZ;   //!
   TBranch        *b_PromptPi_M;   //!
   TBranch        *b_PromptPi_ID;   //!
   TBranch        *b_PromptPi_PIDe;   //!
   TBranch        *b_PromptPi_PIDmu;   //!
   TBranch        *b_PromptPi_PIDK;   //!
   TBranch        *b_PromptPi_PIDp;   //!
   TBranch        *b_PromptPi_ProbNNe;   //!
   TBranch        *b_PromptPi_ProbNNk;   //!
   TBranch        *b_PromptPi_ProbNNp;   //!
   TBranch        *b_PromptPi_ProbNNpi;   //!
   TBranch        *b_PromptPi_ProbNNmu;   //!
   TBranch        *b_PromptPi_ProbNNghost;   //!
   TBranch        *b_PromptPi_hasMuon;   //!
   TBranch        *b_PromptPi_isMuon;   //!
   TBranch        *b_PromptPi_hasRich;   //!
   TBranch        *b_PromptPi_hasCalo;   //!
   TBranch        *b_PromptPi_TRACK_Type;   //!
   TBranch        *b_PromptPi_TRACK_Key;   //!
   TBranch        *b_PromptPi_TRACK_CHI2NDOF;   //!
   TBranch        *b_PromptPi_TRACK_PCHI2;   //!
   TBranch        *b_PromptPi_TRACK_MatchCHI2;   //!
   TBranch        *b_PromptPi_TRACK_GhostProb;   //!
   TBranch        *b_PromptPi_TRACK_CloneDist;   //!
   TBranch        *b_PromptPi_TRACK_Likelihood;   //!
   TBranch        *b_Lambda_ENDVERTEX_X;   //!
   TBranch        *b_Lambda_ENDVERTEX_Y;   //!
   TBranch        *b_Lambda_ENDVERTEX_Z;   //!
   TBranch        *b_Lambda_ENDVERTEX_XERR;   //!
   TBranch        *b_Lambda_ENDVERTEX_YERR;   //!
   TBranch        *b_Lambda_ENDVERTEX_ZERR;   //!
   TBranch        *b_Lambda_ENDVERTEX_CHI2;   //!
   TBranch        *b_Lambda_ENDVERTEX_NDOF;   //!
   TBranch        *b_Lambda_ENDVERTEX_COV_;   //!
   TBranch        *b_Lambda_OWNPV_X;   //!
   TBranch        *b_Lambda_OWNPV_Y;   //!
   TBranch        *b_Lambda_OWNPV_Z;   //!
   TBranch        *b_Lambda_OWNPV_XERR;   //!
   TBranch        *b_Lambda_OWNPV_YERR;   //!
   TBranch        *b_Lambda_OWNPV_ZERR;   //!
   TBranch        *b_Lambda_OWNPV_CHI2;   //!
   TBranch        *b_Lambda_OWNPV_NDOF;   //!
   TBranch        *b_Lambda_OWNPV_COV_;   //!
   TBranch        *b_Lambda_IP_OWNPV;   //!
   TBranch        *b_Lambda_IPCHI2_OWNPV;   //!
   TBranch        *b_Lambda_FD_OWNPV;   //!
   TBranch        *b_Lambda_FDCHI2_OWNPV;   //!
   TBranch        *b_Lambda_DIRA_OWNPV;   //!
   TBranch        *b_Lambda_ORIVX_X;   //!
   TBranch        *b_Lambda_ORIVX_Y;   //!
   TBranch        *b_Lambda_ORIVX_Z;   //!
   TBranch        *b_Lambda_ORIVX_XERR;   //!
   TBranch        *b_Lambda_ORIVX_YERR;   //!
   TBranch        *b_Lambda_ORIVX_ZERR;   //!
   TBranch        *b_Lambda_ORIVX_CHI2;   //!
   TBranch        *b_Lambda_ORIVX_NDOF;   //!
   TBranch        *b_Lambda_ORIVX_COV_;   //!
   TBranch        *b_Lambda_FD_ORIVX;   //!
   TBranch        *b_Lambda_FDCHI2_ORIVX;   //!
   TBranch        *b_Lambda_DIRA_ORIVX;   //!
   TBranch        *b_Lambda_P;   //!
   TBranch        *b_Lambda_PT;   //!
   TBranch        *b_Lambda_PE;   //!
   TBranch        *b_Lambda_PX;   //!
   TBranch        *b_Lambda_PY;   //!
   TBranch        *b_Lambda_PZ;   //!
   TBranch        *b_Lambda_MM;   //!
   TBranch        *b_Lambda_MMERR;   //!
   TBranch        *b_Lambda_M;   //!
   TBranch        *b_Lambda_ID;   //!
   TBranch        *b_Lambda_TAU;   //!
   TBranch        *b_Lambda_TAUERR;   //!
   TBranch        *b_Lambda_TAUCHI2;   //!
   TBranch        *b_DecayPi_OWNPV_X;   //!
   TBranch        *b_DecayPi_OWNPV_Y;   //!
   TBranch        *b_DecayPi_OWNPV_Z;   //!
   TBranch        *b_DecayPi_OWNPV_XERR;   //!
   TBranch        *b_DecayPi_OWNPV_YERR;   //!
   TBranch        *b_DecayPi_OWNPV_ZERR;   //!
   TBranch        *b_DecayPi_OWNPV_CHI2;   //!
   TBranch        *b_DecayPi_OWNPV_NDOF;   //!
   TBranch        *b_DecayPi_OWNPV_COV_;   //!
   TBranch        *b_DecayPi_IP_OWNPV;   //!
   TBranch        *b_DecayPi_IPCHI2_OWNPV;   //!
   TBranch        *b_DecayPi_ORIVX_X;   //!
   TBranch        *b_DecayPi_ORIVX_Y;   //!
   TBranch        *b_DecayPi_ORIVX_Z;   //!
   TBranch        *b_DecayPi_ORIVX_XERR;   //!
   TBranch        *b_DecayPi_ORIVX_YERR;   //!
   TBranch        *b_DecayPi_ORIVX_ZERR;   //!
   TBranch        *b_DecayPi_ORIVX_CHI2;   //!
   TBranch        *b_DecayPi_ORIVX_NDOF;   //!
   TBranch        *b_DecayPi_ORIVX_COV_;   //!
   TBranch        *b_DecayPi_P;   //!
   TBranch        *b_DecayPi_PT;   //!
   TBranch        *b_DecayPi_PE;   //!
   TBranch        *b_DecayPi_PX;   //!
   TBranch        *b_DecayPi_PY;   //!
   TBranch        *b_DecayPi_PZ;   //!
   TBranch        *b_DecayPi_M;   //!
   TBranch        *b_DecayPi_ID;   //!
   TBranch        *b_DecayPi_PIDe;   //!
   TBranch        *b_DecayPi_PIDmu;   //!
   TBranch        *b_DecayPi_PIDK;   //!
   TBranch        *b_DecayPi_PIDp;   //!
   TBranch        *b_DecayPi_ProbNNe;   //!
   TBranch        *b_DecayPi_ProbNNk;   //!
   TBranch        *b_DecayPi_ProbNNp;   //!
   TBranch        *b_DecayPi_ProbNNpi;   //!
   TBranch        *b_DecayPi_ProbNNmu;   //!
   TBranch        *b_DecayPi_ProbNNghost;   //!
   TBranch        *b_DecayPi_hasMuon;   //!
   TBranch        *b_DecayPi_isMuon;   //!
   TBranch        *b_DecayPi_hasRich;   //!
   TBranch        *b_DecayPi_hasCalo;   //!
   TBranch        *b_DecayPi_TRACK_Type;   //!
   TBranch        *b_DecayPi_TRACK_Key;   //!
   TBranch        *b_DecayPi_TRACK_CHI2NDOF;   //!
   TBranch        *b_DecayPi_TRACK_PCHI2;   //!
   TBranch        *b_DecayPi_TRACK_MatchCHI2;   //!
   TBranch        *b_DecayPi_TRACK_GhostProb;   //!
   TBranch        *b_DecayPi_TRACK_CloneDist;   //!
   TBranch        *b_DecayPi_TRACK_Likelihood;   //!
   TBranch        *b_DecayPr_OWNPV_X;   //!
   TBranch        *b_DecayPr_OWNPV_Y;   //!
   TBranch        *b_DecayPr_OWNPV_Z;   //!
   TBranch        *b_DecayPr_OWNPV_XERR;   //!
   TBranch        *b_DecayPr_OWNPV_YERR;   //!
   TBranch        *b_DecayPr_OWNPV_ZERR;   //!
   TBranch        *b_DecayPr_OWNPV_CHI2;   //!
   TBranch        *b_DecayPr_OWNPV_NDOF;   //!
   TBranch        *b_DecayPr_OWNPV_COV_;   //!
   TBranch        *b_DecayPr_IP_OWNPV;   //!
   TBranch        *b_DecayPr_IPCHI2_OWNPV;   //!
   TBranch        *b_DecayPr_ORIVX_X;   //!
   TBranch        *b_DecayPr_ORIVX_Y;   //!
   TBranch        *b_DecayPr_ORIVX_Z;   //!
   TBranch        *b_DecayPr_ORIVX_XERR;   //!
   TBranch        *b_DecayPr_ORIVX_YERR;   //!
   TBranch        *b_DecayPr_ORIVX_ZERR;   //!
   TBranch        *b_DecayPr_ORIVX_CHI2;   //!
   TBranch        *b_DecayPr_ORIVX_NDOF;   //!
   TBranch        *b_DecayPr_ORIVX_COV_;   //!
   TBranch        *b_DecayPr_P;   //!
   TBranch        *b_DecayPr_PT;   //!
   TBranch        *b_DecayPr_PE;   //!
   TBranch        *b_DecayPr_PX;   //!
   TBranch        *b_DecayPr_PY;   //!
   TBranch        *b_DecayPr_PZ;   //!
   TBranch        *b_DecayPr_M;   //!
   TBranch        *b_DecayPr_ID;   //!
   TBranch        *b_DecayPr_PIDe;   //!
   TBranch        *b_DecayPr_PIDmu;   //!
   TBranch        *b_DecayPr_PIDK;   //!
   TBranch        *b_DecayPr_PIDp;   //!
   TBranch        *b_DecayPr_ProbNNe;   //!
   TBranch        *b_DecayPr_ProbNNk;   //!
   TBranch        *b_DecayPr_ProbNNp;   //!
   TBranch        *b_DecayPr_ProbNNpi;   //!
   TBranch        *b_DecayPr_ProbNNmu;   //!
   TBranch        *b_DecayPr_ProbNNghost;   //!
   TBranch        *b_DecayPr_hasMuon;   //!
   TBranch        *b_DecayPr_isMuon;   //!
   TBranch        *b_DecayPr_hasRich;   //!
   TBranch        *b_DecayPr_hasCalo;   //!
   TBranch        *b_DecayPr_TRACK_Type;   //!
   TBranch        *b_DecayPr_TRACK_Key;   //!
   TBranch        *b_DecayPr_TRACK_CHI2NDOF;   //!
   TBranch        *b_DecayPr_TRACK_PCHI2;   //!
   TBranch        *b_DecayPr_TRACK_MatchCHI2;   //!
   TBranch        *b_DecayPr_TRACK_GhostProb;   //!
   TBranch        *b_DecayPr_TRACK_CloneDist;   //!
   TBranch        *b_DecayPr_TRACK_Likelihood;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_EventInSequence;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_BCID;   //!
   TBranch        *b_BCType;   //!
   TBranch        *b_OdinTCK;   //!
   TBranch        *b_L0DUTCK;   //!
   TBranch        *b_HLTTCK;   //!
   TBranch        *b_GpsTime;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_nPV;   //!
   TBranch        *b_PVX;   //!
   TBranch        *b_PVY;   //!
   TBranch        *b_PVZ;   //!
   TBranch        *b_PVXERR;   //!
   TBranch        *b_PVYERR;   //!
   TBranch        *b_PVZERR;   //!
   TBranch        *b_PVCHI2;   //!
   TBranch        *b_PVNDOF;   //!
   TBranch        *b_PVNTRACKS;   //!

   FittingExample(TTree *tree=0);
   virtual ~FittingExample();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FittingExample_cxx
FittingExample::FittingExample(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("DVntuple-March04A.root");
      if (!f) {
         f = new TFile("DVntuple-March04A.root");
         f->cd("DVntuple-March04A.root:/myXiTuple");
      }
      tree = (TTree*)gDirectory->Get("XiDecayTuple");

   }
   Init(tree);
}

FittingExample::~FittingExample()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FittingExample::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FittingExample::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void FittingExample::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Xi_ENDVERTEX_X", &Xi_ENDVERTEX_X, &b_Xi_ENDVERTEX_X);
   fChain->SetBranchAddress("Xi_ENDVERTEX_Y", &Xi_ENDVERTEX_Y, &b_Xi_ENDVERTEX_Y);
   fChain->SetBranchAddress("Xi_ENDVERTEX_Z", &Xi_ENDVERTEX_Z, &b_Xi_ENDVERTEX_Z);
   fChain->SetBranchAddress("Xi_ENDVERTEX_XERR", &Xi_ENDVERTEX_XERR, &b_Xi_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Xi_ENDVERTEX_YERR", &Xi_ENDVERTEX_YERR, &b_Xi_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Xi_ENDVERTEX_ZERR", &Xi_ENDVERTEX_ZERR, &b_Xi_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Xi_ENDVERTEX_CHI2", &Xi_ENDVERTEX_CHI2, &b_Xi_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Xi_ENDVERTEX_NDOF", &Xi_ENDVERTEX_NDOF, &b_Xi_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Xi_ENDVERTEX_COV_", Xi_ENDVERTEX_COV_, &b_Xi_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Xi_OWNPV_X", &Xi_OWNPV_X, &b_Xi_OWNPV_X);
   fChain->SetBranchAddress("Xi_OWNPV_Y", &Xi_OWNPV_Y, &b_Xi_OWNPV_Y);
   fChain->SetBranchAddress("Xi_OWNPV_Z", &Xi_OWNPV_Z, &b_Xi_OWNPV_Z);
   fChain->SetBranchAddress("Xi_OWNPV_XERR", &Xi_OWNPV_XERR, &b_Xi_OWNPV_XERR);
   fChain->SetBranchAddress("Xi_OWNPV_YERR", &Xi_OWNPV_YERR, &b_Xi_OWNPV_YERR);
   fChain->SetBranchAddress("Xi_OWNPV_ZERR", &Xi_OWNPV_ZERR, &b_Xi_OWNPV_ZERR);
   fChain->SetBranchAddress("Xi_OWNPV_CHI2", &Xi_OWNPV_CHI2, &b_Xi_OWNPV_CHI2);
   fChain->SetBranchAddress("Xi_OWNPV_NDOF", &Xi_OWNPV_NDOF, &b_Xi_OWNPV_NDOF);
   fChain->SetBranchAddress("Xi_OWNPV_COV_", Xi_OWNPV_COV_, &b_Xi_OWNPV_COV_);
   fChain->SetBranchAddress("Xi_IP_OWNPV", &Xi_IP_OWNPV, &b_Xi_IP_OWNPV);
   fChain->SetBranchAddress("Xi_IPCHI2_OWNPV", &Xi_IPCHI2_OWNPV, &b_Xi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Xi_FD_OWNPV", &Xi_FD_OWNPV, &b_Xi_FD_OWNPV);
   fChain->SetBranchAddress("Xi_FDCHI2_OWNPV", &Xi_FDCHI2_OWNPV, &b_Xi_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Xi_DIRA_OWNPV", &Xi_DIRA_OWNPV, &b_Xi_DIRA_OWNPV);
   fChain->SetBranchAddress("Xi_P", &Xi_P, &b_Xi_P);
   fChain->SetBranchAddress("Xi_PT", &Xi_PT, &b_Xi_PT);
   fChain->SetBranchAddress("Xi_PE", &Xi_PE, &b_Xi_PE);
   fChain->SetBranchAddress("Xi_PX", &Xi_PX, &b_Xi_PX);
   fChain->SetBranchAddress("Xi_PY", &Xi_PY, &b_Xi_PY);
   fChain->SetBranchAddress("Xi_PZ", &Xi_PZ, &b_Xi_PZ);
   fChain->SetBranchAddress("Xi_MM", &Xi_MM, &b_Xi_MM);
   fChain->SetBranchAddress("Xi_MMERR", &Xi_MMERR, &b_Xi_MMERR);
   fChain->SetBranchAddress("Xi_M", &Xi_M, &b_Xi_M);
   fChain->SetBranchAddress("Xi_ID", &Xi_ID, &b_Xi_ID);
   fChain->SetBranchAddress("Xi_TAU", &Xi_TAU, &b_Xi_TAU);
   fChain->SetBranchAddress("Xi_TAUERR", &Xi_TAUERR, &b_Xi_TAUERR);
   fChain->SetBranchAddress("Xi_TAUCHI2", &Xi_TAUCHI2, &b_Xi_TAUCHI2);
   fChain->SetBranchAddress("PromptPi_OWNPV_X", &PromptPi_OWNPV_X, &b_PromptPi_OWNPV_X);
   fChain->SetBranchAddress("PromptPi_OWNPV_Y", &PromptPi_OWNPV_Y, &b_PromptPi_OWNPV_Y);
   fChain->SetBranchAddress("PromptPi_OWNPV_Z", &PromptPi_OWNPV_Z, &b_PromptPi_OWNPV_Z);
   fChain->SetBranchAddress("PromptPi_OWNPV_XERR", &PromptPi_OWNPV_XERR, &b_PromptPi_OWNPV_XERR);
   fChain->SetBranchAddress("PromptPi_OWNPV_YERR", &PromptPi_OWNPV_YERR, &b_PromptPi_OWNPV_YERR);
   fChain->SetBranchAddress("PromptPi_OWNPV_ZERR", &PromptPi_OWNPV_ZERR, &b_PromptPi_OWNPV_ZERR);
   fChain->SetBranchAddress("PromptPi_OWNPV_CHI2", &PromptPi_OWNPV_CHI2, &b_PromptPi_OWNPV_CHI2);
   fChain->SetBranchAddress("PromptPi_OWNPV_NDOF", &PromptPi_OWNPV_NDOF, &b_PromptPi_OWNPV_NDOF);
   fChain->SetBranchAddress("PromptPi_OWNPV_COV_", PromptPi_OWNPV_COV_, &b_PromptPi_OWNPV_COV_);
   fChain->SetBranchAddress("PromptPi_IP_OWNPV", &PromptPi_IP_OWNPV, &b_PromptPi_IP_OWNPV);
   fChain->SetBranchAddress("PromptPi_IPCHI2_OWNPV", &PromptPi_IPCHI2_OWNPV, &b_PromptPi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("PromptPi_ORIVX_X", &PromptPi_ORIVX_X, &b_PromptPi_ORIVX_X);
   fChain->SetBranchAddress("PromptPi_ORIVX_Y", &PromptPi_ORIVX_Y, &b_PromptPi_ORIVX_Y);
   fChain->SetBranchAddress("PromptPi_ORIVX_Z", &PromptPi_ORIVX_Z, &b_PromptPi_ORIVX_Z);
   fChain->SetBranchAddress("PromptPi_ORIVX_XERR", &PromptPi_ORIVX_XERR, &b_PromptPi_ORIVX_XERR);
   fChain->SetBranchAddress("PromptPi_ORIVX_YERR", &PromptPi_ORIVX_YERR, &b_PromptPi_ORIVX_YERR);
   fChain->SetBranchAddress("PromptPi_ORIVX_ZERR", &PromptPi_ORIVX_ZERR, &b_PromptPi_ORIVX_ZERR);
   fChain->SetBranchAddress("PromptPi_ORIVX_CHI2", &PromptPi_ORIVX_CHI2, &b_PromptPi_ORIVX_CHI2);
   fChain->SetBranchAddress("PromptPi_ORIVX_NDOF", &PromptPi_ORIVX_NDOF, &b_PromptPi_ORIVX_NDOF);
   fChain->SetBranchAddress("PromptPi_ORIVX_COV_", PromptPi_ORIVX_COV_, &b_PromptPi_ORIVX_COV_);
   fChain->SetBranchAddress("PromptPi_P", &PromptPi_P, &b_PromptPi_P);
   fChain->SetBranchAddress("PromptPi_PT", &PromptPi_PT, &b_PromptPi_PT);
   fChain->SetBranchAddress("PromptPi_PE", &PromptPi_PE, &b_PromptPi_PE);
   fChain->SetBranchAddress("PromptPi_PX", &PromptPi_PX, &b_PromptPi_PX);
   fChain->SetBranchAddress("PromptPi_PY", &PromptPi_PY, &b_PromptPi_PY);
   fChain->SetBranchAddress("PromptPi_PZ", &PromptPi_PZ, &b_PromptPi_PZ);
   fChain->SetBranchAddress("PromptPi_M", &PromptPi_M, &b_PromptPi_M);
   fChain->SetBranchAddress("PromptPi_ID", &PromptPi_ID, &b_PromptPi_ID);
   fChain->SetBranchAddress("PromptPi_PIDe", &PromptPi_PIDe, &b_PromptPi_PIDe);
   fChain->SetBranchAddress("PromptPi_PIDmu", &PromptPi_PIDmu, &b_PromptPi_PIDmu);
   fChain->SetBranchAddress("PromptPi_PIDK", &PromptPi_PIDK, &b_PromptPi_PIDK);
   fChain->SetBranchAddress("PromptPi_PIDp", &PromptPi_PIDp, &b_PromptPi_PIDp);
   fChain->SetBranchAddress("PromptPi_ProbNNe", &PromptPi_ProbNNe, &b_PromptPi_ProbNNe);
   fChain->SetBranchAddress("PromptPi_ProbNNk", &PromptPi_ProbNNk, &b_PromptPi_ProbNNk);
   fChain->SetBranchAddress("PromptPi_ProbNNp", &PromptPi_ProbNNp, &b_PromptPi_ProbNNp);
   fChain->SetBranchAddress("PromptPi_ProbNNpi", &PromptPi_ProbNNpi, &b_PromptPi_ProbNNpi);
   fChain->SetBranchAddress("PromptPi_ProbNNmu", &PromptPi_ProbNNmu, &b_PromptPi_ProbNNmu);
   fChain->SetBranchAddress("PromptPi_ProbNNghost", &PromptPi_ProbNNghost, &b_PromptPi_ProbNNghost);
   fChain->SetBranchAddress("PromptPi_hasMuon", &PromptPi_hasMuon, &b_PromptPi_hasMuon);
   fChain->SetBranchAddress("PromptPi_isMuon", &PromptPi_isMuon, &b_PromptPi_isMuon);
   fChain->SetBranchAddress("PromptPi_hasRich", &PromptPi_hasRich, &b_PromptPi_hasRich);
   fChain->SetBranchAddress("PromptPi_hasCalo", &PromptPi_hasCalo, &b_PromptPi_hasCalo);
   fChain->SetBranchAddress("PromptPi_TRACK_Type", &PromptPi_TRACK_Type, &b_PromptPi_TRACK_Type);
   fChain->SetBranchAddress("PromptPi_TRACK_Key", &PromptPi_TRACK_Key, &b_PromptPi_TRACK_Key);
   fChain->SetBranchAddress("PromptPi_TRACK_CHI2NDOF", &PromptPi_TRACK_CHI2NDOF, &b_PromptPi_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("PromptPi_TRACK_PCHI2", &PromptPi_TRACK_PCHI2, &b_PromptPi_TRACK_PCHI2);
   fChain->SetBranchAddress("PromptPi_TRACK_MatchCHI2", &PromptPi_TRACK_MatchCHI2, &b_PromptPi_TRACK_MatchCHI2);
   fChain->SetBranchAddress("PromptPi_TRACK_GhostProb", &PromptPi_TRACK_GhostProb, &b_PromptPi_TRACK_GhostProb);
   fChain->SetBranchAddress("PromptPi_TRACK_CloneDist", &PromptPi_TRACK_CloneDist, &b_PromptPi_TRACK_CloneDist);
   fChain->SetBranchAddress("PromptPi_TRACK_Likelihood", &PromptPi_TRACK_Likelihood, &b_PromptPi_TRACK_Likelihood);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_X", &Lambda_ENDVERTEX_X, &b_Lambda_ENDVERTEX_X);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_Y", &Lambda_ENDVERTEX_Y, &b_Lambda_ENDVERTEX_Y);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_Z", &Lambda_ENDVERTEX_Z, &b_Lambda_ENDVERTEX_Z);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_XERR", &Lambda_ENDVERTEX_XERR, &b_Lambda_ENDVERTEX_XERR);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_YERR", &Lambda_ENDVERTEX_YERR, &b_Lambda_ENDVERTEX_YERR);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_ZERR", &Lambda_ENDVERTEX_ZERR, &b_Lambda_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_CHI2", &Lambda_ENDVERTEX_CHI2, &b_Lambda_ENDVERTEX_CHI2);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_NDOF", &Lambda_ENDVERTEX_NDOF, &b_Lambda_ENDVERTEX_NDOF);
   fChain->SetBranchAddress("Lambda_ENDVERTEX_COV_", Lambda_ENDVERTEX_COV_, &b_Lambda_ENDVERTEX_COV_);
   fChain->SetBranchAddress("Lambda_OWNPV_X", &Lambda_OWNPV_X, &b_Lambda_OWNPV_X);
   fChain->SetBranchAddress("Lambda_OWNPV_Y", &Lambda_OWNPV_Y, &b_Lambda_OWNPV_Y);
   fChain->SetBranchAddress("Lambda_OWNPV_Z", &Lambda_OWNPV_Z, &b_Lambda_OWNPV_Z);
   fChain->SetBranchAddress("Lambda_OWNPV_XERR", &Lambda_OWNPV_XERR, &b_Lambda_OWNPV_XERR);
   fChain->SetBranchAddress("Lambda_OWNPV_YERR", &Lambda_OWNPV_YERR, &b_Lambda_OWNPV_YERR);
   fChain->SetBranchAddress("Lambda_OWNPV_ZERR", &Lambda_OWNPV_ZERR, &b_Lambda_OWNPV_ZERR);
   fChain->SetBranchAddress("Lambda_OWNPV_CHI2", &Lambda_OWNPV_CHI2, &b_Lambda_OWNPV_CHI2);
   fChain->SetBranchAddress("Lambda_OWNPV_NDOF", &Lambda_OWNPV_NDOF, &b_Lambda_OWNPV_NDOF);
   fChain->SetBranchAddress("Lambda_OWNPV_COV_", Lambda_OWNPV_COV_, &b_Lambda_OWNPV_COV_);
   fChain->SetBranchAddress("Lambda_IP_OWNPV", &Lambda_IP_OWNPV, &b_Lambda_IP_OWNPV);
   fChain->SetBranchAddress("Lambda_IPCHI2_OWNPV", &Lambda_IPCHI2_OWNPV, &b_Lambda_IPCHI2_OWNPV);
   fChain->SetBranchAddress("Lambda_FD_OWNPV", &Lambda_FD_OWNPV, &b_Lambda_FD_OWNPV);
   fChain->SetBranchAddress("Lambda_FDCHI2_OWNPV", &Lambda_FDCHI2_OWNPV, &b_Lambda_FDCHI2_OWNPV);
   fChain->SetBranchAddress("Lambda_DIRA_OWNPV", &Lambda_DIRA_OWNPV, &b_Lambda_DIRA_OWNPV);
   fChain->SetBranchAddress("Lambda_ORIVX_X", &Lambda_ORIVX_X, &b_Lambda_ORIVX_X);
   fChain->SetBranchAddress("Lambda_ORIVX_Y", &Lambda_ORIVX_Y, &b_Lambda_ORIVX_Y);
   fChain->SetBranchAddress("Lambda_ORIVX_Z", &Lambda_ORIVX_Z, &b_Lambda_ORIVX_Z);
   fChain->SetBranchAddress("Lambda_ORIVX_XERR", &Lambda_ORIVX_XERR, &b_Lambda_ORIVX_XERR);
   fChain->SetBranchAddress("Lambda_ORIVX_YERR", &Lambda_ORIVX_YERR, &b_Lambda_ORIVX_YERR);
   fChain->SetBranchAddress("Lambda_ORIVX_ZERR", &Lambda_ORIVX_ZERR, &b_Lambda_ORIVX_ZERR);
   fChain->SetBranchAddress("Lambda_ORIVX_CHI2", &Lambda_ORIVX_CHI2, &b_Lambda_ORIVX_CHI2);
   fChain->SetBranchAddress("Lambda_ORIVX_NDOF", &Lambda_ORIVX_NDOF, &b_Lambda_ORIVX_NDOF);
   fChain->SetBranchAddress("Lambda_ORIVX_COV_", Lambda_ORIVX_COV_, &b_Lambda_ORIVX_COV_);
   fChain->SetBranchAddress("Lambda_FD_ORIVX", &Lambda_FD_ORIVX, &b_Lambda_FD_ORIVX);
   fChain->SetBranchAddress("Lambda_FDCHI2_ORIVX", &Lambda_FDCHI2_ORIVX, &b_Lambda_FDCHI2_ORIVX);
   fChain->SetBranchAddress("Lambda_DIRA_ORIVX", &Lambda_DIRA_ORIVX, &b_Lambda_DIRA_ORIVX);
   fChain->SetBranchAddress("Lambda_P", &Lambda_P, &b_Lambda_P);
   fChain->SetBranchAddress("Lambda_PT", &Lambda_PT, &b_Lambda_PT);
   fChain->SetBranchAddress("Lambda_PE", &Lambda_PE, &b_Lambda_PE);
   fChain->SetBranchAddress("Lambda_PX", &Lambda_PX, &b_Lambda_PX);
   fChain->SetBranchAddress("Lambda_PY", &Lambda_PY, &b_Lambda_PY);
   fChain->SetBranchAddress("Lambda_PZ", &Lambda_PZ, &b_Lambda_PZ);
   fChain->SetBranchAddress("Lambda_MM", &Lambda_MM, &b_Lambda_MM);
   fChain->SetBranchAddress("Lambda_MMERR", &Lambda_MMERR, &b_Lambda_MMERR);
   fChain->SetBranchAddress("Lambda_M", &Lambda_M, &b_Lambda_M);
   fChain->SetBranchAddress("Lambda_ID", &Lambda_ID, &b_Lambda_ID);
   fChain->SetBranchAddress("Lambda_TAU", &Lambda_TAU, &b_Lambda_TAU);
   fChain->SetBranchAddress("Lambda_TAUERR", &Lambda_TAUERR, &b_Lambda_TAUERR);
   fChain->SetBranchAddress("Lambda_TAUCHI2", &Lambda_TAUCHI2, &b_Lambda_TAUCHI2);
   fChain->SetBranchAddress("DecayPi_OWNPV_X", &DecayPi_OWNPV_X, &b_DecayPi_OWNPV_X);
   fChain->SetBranchAddress("DecayPi_OWNPV_Y", &DecayPi_OWNPV_Y, &b_DecayPi_OWNPV_Y);
   fChain->SetBranchAddress("DecayPi_OWNPV_Z", &DecayPi_OWNPV_Z, &b_DecayPi_OWNPV_Z);
   fChain->SetBranchAddress("DecayPi_OWNPV_XERR", &DecayPi_OWNPV_XERR, &b_DecayPi_OWNPV_XERR);
   fChain->SetBranchAddress("DecayPi_OWNPV_YERR", &DecayPi_OWNPV_YERR, &b_DecayPi_OWNPV_YERR);
   fChain->SetBranchAddress("DecayPi_OWNPV_ZERR", &DecayPi_OWNPV_ZERR, &b_DecayPi_OWNPV_ZERR);
   fChain->SetBranchAddress("DecayPi_OWNPV_CHI2", &DecayPi_OWNPV_CHI2, &b_DecayPi_OWNPV_CHI2);
   fChain->SetBranchAddress("DecayPi_OWNPV_NDOF", &DecayPi_OWNPV_NDOF, &b_DecayPi_OWNPV_NDOF);
   fChain->SetBranchAddress("DecayPi_OWNPV_COV_", DecayPi_OWNPV_COV_, &b_DecayPi_OWNPV_COV_);
   fChain->SetBranchAddress("DecayPi_IP_OWNPV", &DecayPi_IP_OWNPV, &b_DecayPi_IP_OWNPV);
   fChain->SetBranchAddress("DecayPi_IPCHI2_OWNPV", &DecayPi_IPCHI2_OWNPV, &b_DecayPi_IPCHI2_OWNPV);
   fChain->SetBranchAddress("DecayPi_ORIVX_X", &DecayPi_ORIVX_X, &b_DecayPi_ORIVX_X);
   fChain->SetBranchAddress("DecayPi_ORIVX_Y", &DecayPi_ORIVX_Y, &b_DecayPi_ORIVX_Y);
   fChain->SetBranchAddress("DecayPi_ORIVX_Z", &DecayPi_ORIVX_Z, &b_DecayPi_ORIVX_Z);
   fChain->SetBranchAddress("DecayPi_ORIVX_XERR", &DecayPi_ORIVX_XERR, &b_DecayPi_ORIVX_XERR);
   fChain->SetBranchAddress("DecayPi_ORIVX_YERR", &DecayPi_ORIVX_YERR, &b_DecayPi_ORIVX_YERR);
   fChain->SetBranchAddress("DecayPi_ORIVX_ZERR", &DecayPi_ORIVX_ZERR, &b_DecayPi_ORIVX_ZERR);
   fChain->SetBranchAddress("DecayPi_ORIVX_CHI2", &DecayPi_ORIVX_CHI2, &b_DecayPi_ORIVX_CHI2);
   fChain->SetBranchAddress("DecayPi_ORIVX_NDOF", &DecayPi_ORIVX_NDOF, &b_DecayPi_ORIVX_NDOF);
   fChain->SetBranchAddress("DecayPi_ORIVX_COV_", DecayPi_ORIVX_COV_, &b_DecayPi_ORIVX_COV_);
   fChain->SetBranchAddress("DecayPi_P", &DecayPi_P, &b_DecayPi_P);
   fChain->SetBranchAddress("DecayPi_PT", &DecayPi_PT, &b_DecayPi_PT);
   fChain->SetBranchAddress("DecayPi_PE", &DecayPi_PE, &b_DecayPi_PE);
   fChain->SetBranchAddress("DecayPi_PX", &DecayPi_PX, &b_DecayPi_PX);
   fChain->SetBranchAddress("DecayPi_PY", &DecayPi_PY, &b_DecayPi_PY);
   fChain->SetBranchAddress("DecayPi_PZ", &DecayPi_PZ, &b_DecayPi_PZ);
   fChain->SetBranchAddress("DecayPi_M", &DecayPi_M, &b_DecayPi_M);
   fChain->SetBranchAddress("DecayPi_ID", &DecayPi_ID, &b_DecayPi_ID);
   fChain->SetBranchAddress("DecayPi_PIDe", &DecayPi_PIDe, &b_DecayPi_PIDe);
   fChain->SetBranchAddress("DecayPi_PIDmu", &DecayPi_PIDmu, &b_DecayPi_PIDmu);
   fChain->SetBranchAddress("DecayPi_PIDK", &DecayPi_PIDK, &b_DecayPi_PIDK);
   fChain->SetBranchAddress("DecayPi_PIDp", &DecayPi_PIDp, &b_DecayPi_PIDp);
   fChain->SetBranchAddress("DecayPi_ProbNNe", &DecayPi_ProbNNe, &b_DecayPi_ProbNNe);
   fChain->SetBranchAddress("DecayPi_ProbNNk", &DecayPi_ProbNNk, &b_DecayPi_ProbNNk);
   fChain->SetBranchAddress("DecayPi_ProbNNp", &DecayPi_ProbNNp, &b_DecayPi_ProbNNp);
   fChain->SetBranchAddress("DecayPi_ProbNNpi", &DecayPi_ProbNNpi, &b_DecayPi_ProbNNpi);
   fChain->SetBranchAddress("DecayPi_ProbNNmu", &DecayPi_ProbNNmu, &b_DecayPi_ProbNNmu);
   fChain->SetBranchAddress("DecayPi_ProbNNghost", &DecayPi_ProbNNghost, &b_DecayPi_ProbNNghost);
   fChain->SetBranchAddress("DecayPi_hasMuon", &DecayPi_hasMuon, &b_DecayPi_hasMuon);
   fChain->SetBranchAddress("DecayPi_isMuon", &DecayPi_isMuon, &b_DecayPi_isMuon);
   fChain->SetBranchAddress("DecayPi_hasRich", &DecayPi_hasRich, &b_DecayPi_hasRich);
   fChain->SetBranchAddress("DecayPi_hasCalo", &DecayPi_hasCalo, &b_DecayPi_hasCalo);
   fChain->SetBranchAddress("DecayPi_TRACK_Type", &DecayPi_TRACK_Type, &b_DecayPi_TRACK_Type);
   fChain->SetBranchAddress("DecayPi_TRACK_Key", &DecayPi_TRACK_Key, &b_DecayPi_TRACK_Key);
   fChain->SetBranchAddress("DecayPi_TRACK_CHI2NDOF", &DecayPi_TRACK_CHI2NDOF, &b_DecayPi_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("DecayPi_TRACK_PCHI2", &DecayPi_TRACK_PCHI2, &b_DecayPi_TRACK_PCHI2);
   fChain->SetBranchAddress("DecayPi_TRACK_MatchCHI2", &DecayPi_TRACK_MatchCHI2, &b_DecayPi_TRACK_MatchCHI2);
   fChain->SetBranchAddress("DecayPi_TRACK_GhostProb", &DecayPi_TRACK_GhostProb, &b_DecayPi_TRACK_GhostProb);
   fChain->SetBranchAddress("DecayPi_TRACK_CloneDist", &DecayPi_TRACK_CloneDist, &b_DecayPi_TRACK_CloneDist);
   fChain->SetBranchAddress("DecayPi_TRACK_Likelihood", &DecayPi_TRACK_Likelihood, &b_DecayPi_TRACK_Likelihood);
   fChain->SetBranchAddress("DecayPr_OWNPV_X", &DecayPr_OWNPV_X, &b_DecayPr_OWNPV_X);
   fChain->SetBranchAddress("DecayPr_OWNPV_Y", &DecayPr_OWNPV_Y, &b_DecayPr_OWNPV_Y);
   fChain->SetBranchAddress("DecayPr_OWNPV_Z", &DecayPr_OWNPV_Z, &b_DecayPr_OWNPV_Z);
   fChain->SetBranchAddress("DecayPr_OWNPV_XERR", &DecayPr_OWNPV_XERR, &b_DecayPr_OWNPV_XERR);
   fChain->SetBranchAddress("DecayPr_OWNPV_YERR", &DecayPr_OWNPV_YERR, &b_DecayPr_OWNPV_YERR);
   fChain->SetBranchAddress("DecayPr_OWNPV_ZERR", &DecayPr_OWNPV_ZERR, &b_DecayPr_OWNPV_ZERR);
   fChain->SetBranchAddress("DecayPr_OWNPV_CHI2", &DecayPr_OWNPV_CHI2, &b_DecayPr_OWNPV_CHI2);
   fChain->SetBranchAddress("DecayPr_OWNPV_NDOF", &DecayPr_OWNPV_NDOF, &b_DecayPr_OWNPV_NDOF);
   fChain->SetBranchAddress("DecayPr_OWNPV_COV_", DecayPr_OWNPV_COV_, &b_DecayPr_OWNPV_COV_);
   fChain->SetBranchAddress("DecayPr_IP_OWNPV", &DecayPr_IP_OWNPV, &b_DecayPr_IP_OWNPV);
   fChain->SetBranchAddress("DecayPr_IPCHI2_OWNPV", &DecayPr_IPCHI2_OWNPV, &b_DecayPr_IPCHI2_OWNPV);
   fChain->SetBranchAddress("DecayPr_ORIVX_X", &DecayPr_ORIVX_X, &b_DecayPr_ORIVX_X);
   fChain->SetBranchAddress("DecayPr_ORIVX_Y", &DecayPr_ORIVX_Y, &b_DecayPr_ORIVX_Y);
   fChain->SetBranchAddress("DecayPr_ORIVX_Z", &DecayPr_ORIVX_Z, &b_DecayPr_ORIVX_Z);
   fChain->SetBranchAddress("DecayPr_ORIVX_XERR", &DecayPr_ORIVX_XERR, &b_DecayPr_ORIVX_XERR);
   fChain->SetBranchAddress("DecayPr_ORIVX_YERR", &DecayPr_ORIVX_YERR, &b_DecayPr_ORIVX_YERR);
   fChain->SetBranchAddress("DecayPr_ORIVX_ZERR", &DecayPr_ORIVX_ZERR, &b_DecayPr_ORIVX_ZERR);
   fChain->SetBranchAddress("DecayPr_ORIVX_CHI2", &DecayPr_ORIVX_CHI2, &b_DecayPr_ORIVX_CHI2);
   fChain->SetBranchAddress("DecayPr_ORIVX_NDOF", &DecayPr_ORIVX_NDOF, &b_DecayPr_ORIVX_NDOF);
   fChain->SetBranchAddress("DecayPr_ORIVX_COV_", DecayPr_ORIVX_COV_, &b_DecayPr_ORIVX_COV_);
   fChain->SetBranchAddress("DecayPr_P", &DecayPr_P, &b_DecayPr_P);
   fChain->SetBranchAddress("DecayPr_PT", &DecayPr_PT, &b_DecayPr_PT);
   fChain->SetBranchAddress("DecayPr_PE", &DecayPr_PE, &b_DecayPr_PE);
   fChain->SetBranchAddress("DecayPr_PX", &DecayPr_PX, &b_DecayPr_PX);
   fChain->SetBranchAddress("DecayPr_PY", &DecayPr_PY, &b_DecayPr_PY);
   fChain->SetBranchAddress("DecayPr_PZ", &DecayPr_PZ, &b_DecayPr_PZ);
   fChain->SetBranchAddress("DecayPr_M", &DecayPr_M, &b_DecayPr_M);
   fChain->SetBranchAddress("DecayPr_ID", &DecayPr_ID, &b_DecayPr_ID);
   fChain->SetBranchAddress("DecayPr_PIDe", &DecayPr_PIDe, &b_DecayPr_PIDe);
   fChain->SetBranchAddress("DecayPr_PIDmu", &DecayPr_PIDmu, &b_DecayPr_PIDmu);
   fChain->SetBranchAddress("DecayPr_PIDK", &DecayPr_PIDK, &b_DecayPr_PIDK);
   fChain->SetBranchAddress("DecayPr_PIDp", &DecayPr_PIDp, &b_DecayPr_PIDp);
   fChain->SetBranchAddress("DecayPr_ProbNNe", &DecayPr_ProbNNe, &b_DecayPr_ProbNNe);
   fChain->SetBranchAddress("DecayPr_ProbNNk", &DecayPr_ProbNNk, &b_DecayPr_ProbNNk);
   fChain->SetBranchAddress("DecayPr_ProbNNp", &DecayPr_ProbNNp, &b_DecayPr_ProbNNp);
   fChain->SetBranchAddress("DecayPr_ProbNNpi", &DecayPr_ProbNNpi, &b_DecayPr_ProbNNpi);
   fChain->SetBranchAddress("DecayPr_ProbNNmu", &DecayPr_ProbNNmu, &b_DecayPr_ProbNNmu);
   fChain->SetBranchAddress("DecayPr_ProbNNghost", &DecayPr_ProbNNghost, &b_DecayPr_ProbNNghost);
   fChain->SetBranchAddress("DecayPr_hasMuon", &DecayPr_hasMuon, &b_DecayPr_hasMuon);
   fChain->SetBranchAddress("DecayPr_isMuon", &DecayPr_isMuon, &b_DecayPr_isMuon);
   fChain->SetBranchAddress("DecayPr_hasRich", &DecayPr_hasRich, &b_DecayPr_hasRich);
   fChain->SetBranchAddress("DecayPr_hasCalo", &DecayPr_hasCalo, &b_DecayPr_hasCalo);
   fChain->SetBranchAddress("DecayPr_TRACK_Type", &DecayPr_TRACK_Type, &b_DecayPr_TRACK_Type);
   fChain->SetBranchAddress("DecayPr_TRACK_Key", &DecayPr_TRACK_Key, &b_DecayPr_TRACK_Key);
   fChain->SetBranchAddress("DecayPr_TRACK_CHI2NDOF", &DecayPr_TRACK_CHI2NDOF, &b_DecayPr_TRACK_CHI2NDOF);
   fChain->SetBranchAddress("DecayPr_TRACK_PCHI2", &DecayPr_TRACK_PCHI2, &b_DecayPr_TRACK_PCHI2);
   fChain->SetBranchAddress("DecayPr_TRACK_MatchCHI2", &DecayPr_TRACK_MatchCHI2, &b_DecayPr_TRACK_MatchCHI2);
   fChain->SetBranchAddress("DecayPr_TRACK_GhostProb", &DecayPr_TRACK_GhostProb, &b_DecayPr_TRACK_GhostProb);
   fChain->SetBranchAddress("DecayPr_TRACK_CloneDist", &DecayPr_TRACK_CloneDist, &b_DecayPr_TRACK_CloneDist);
   fChain->SetBranchAddress("DecayPr_TRACK_Likelihood", &DecayPr_TRACK_Likelihood, &b_DecayPr_TRACK_Likelihood);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("EventInSequence", &EventInSequence, &b_EventInSequence);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("BCID", &BCID, &b_BCID);
   fChain->SetBranchAddress("BCType", &BCType, &b_BCType);
   fChain->SetBranchAddress("OdinTCK", &OdinTCK, &b_OdinTCK);
   fChain->SetBranchAddress("L0DUTCK", &L0DUTCK, &b_L0DUTCK);
   fChain->SetBranchAddress("HLTTCK", &HLTTCK, &b_HLTTCK);
   fChain->SetBranchAddress("GpsTime", &GpsTime, &b_GpsTime);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("nPV", &nPV, &b_nPV);
   fChain->SetBranchAddress("PVX", PVX, &b_PVX);
   fChain->SetBranchAddress("PVY", PVY, &b_PVY);
   fChain->SetBranchAddress("PVZ", PVZ, &b_PVZ);
   fChain->SetBranchAddress("PVXERR", PVXERR, &b_PVXERR);
   fChain->SetBranchAddress("PVYERR", PVYERR, &b_PVYERR);
   fChain->SetBranchAddress("PVZERR", PVZERR, &b_PVZERR);
   fChain->SetBranchAddress("PVCHI2", PVCHI2, &b_PVCHI2);
   fChain->SetBranchAddress("PVNDOF", PVNDOF, &b_PVNDOF);
   fChain->SetBranchAddress("PVNTRACKS", PVNTRACKS, &b_PVNTRACKS);
   Notify();
}

Bool_t FittingExample::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FittingExample::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FittingExample::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef FittingExample_cxx
