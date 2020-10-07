//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Oct  6 12:55:56 2020 by ROOT version 6.22/02
// from TTree DecayTree/DecayTree
// found on file: /eos/lhcb/user/a/aburke/KmPimPipPip_prompt_2015_up_1of4.root
//////////////////////////////////////////////////////////

#ifndef DecayTree_h
#define DecayTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class DecayTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   ULong64_t       eventNumber;
   UInt_t          runNumber;
   ULong64_t       totCandidates;
   UInt_t          nCandidate;
   Int_t           nPVs;
   Int_t           nTracks;
   Short_t         Polarity;
   Bool_t          Dst_L0Global_TIS;
   Bool_t          D0_L0HadronDecision_TOS;
   Bool_t          D0_Hlt1TrackMVADecision_TOS;
   Bool_t          D0_Hlt1TwoTrackMVADecision_TOS;
   Double_t        PV_X;
   Double_t        PV_Y;
   Double_t        PV_Z;
   Double_t        PV_XERR;
   Double_t        PV_YERR;
   Double_t        PV_ZERR;
   Float_t         D0Fit_status;
   Float_t         D0Fit_chi2;
   Float_t         D0Fit_nDOF;
   Float_t         ReFit_status;
   Float_t         ReFit_chi2;
   Float_t         ReFit_nDOF;
   Double_t        Dst_M;
   Float_t         Dst_D0Fit_M;
   Float_t         Dst_ReFit_M;
   Double_t        Dst_PE;
   Double_t        Dst_PX;
   Double_t        Dst_PY;
   Double_t        Dst_PZ;
   Float_t         Dst_D0Fit_P;
   Float_t         Dst_ReFit_P;
   Double_t        D0_M;
   Float_t         D0_D0Fit_M;
   Float_t         D0_ReFit_M;
   Double_t        D0_PE;
   Float_t         D0_D0Fit_P;
   Float_t         D0_ReFit_P;
   Double_t        D0_IP;
   Double_t        D0_IPCHI2;
   Double_t        D0_FD;
   Double_t        D0_FDCHI2;
   Double_t        D0_ENDVERTEX_X;
   Double_t        D0_ENDVERTEX_Y;
   Double_t        D0_ENDVERTEX_Z;
   Double_t        D0_ENDVERTEX_XERR;
   Double_t        D0_ENDVERTEX_YERR;
   Double_t        D0_ENDVERTEX_ZERR;
   Double_t        H1_ID;
   Double_t        H1_PE;
   Double_t        H1_PX;
   Double_t        H1_PY;
   Double_t        H1_PZ;
   Float_t         H1_D0Fit_PE;
   Float_t         H1_D0Fit_PX;
   Float_t         H1_D0Fit_PY;
   Float_t         H1_D0Fit_PZ;
   Float_t         H1_ReFit_PE;
   Float_t         H1_ReFit_PX;
   Float_t         H1_ReFit_PY;
   Float_t         H1_ReFit_PZ;
   Double_t        H1_ProbNNpi;
   Double_t        H1_ProbNNk;
   Double_t        H1_ProbNNghost;
   Int_t           H2_ID;
   Double_t        H2_PE;
   Double_t        H2_PX;
   Double_t        H2_PY;
   Double_t        H2_PZ;
   Float_t         H2_D0Fit_PE;
   Float_t         H2_D0Fit_PX;
   Float_t         H2_D0Fit_PY;
   Float_t         H2_D0Fit_PZ;
   Float_t         H2_ReFit_PE;
   Float_t         H2_ReFit_PX;
   Float_t         H2_ReFit_PY;
   Float_t         H2_ReFit_PZ;
   Double_t        H2_ProbNNpi;
   Double_t        H2_ProbNNk;
   Double_t        H2_ProbNNghost;
   Double_t        H3_ID;
   Double_t        H3_PE;
   Double_t        H3_PX;
   Double_t        H3_PY;
   Double_t        H3_PZ;
   Float_t         H3_D0Fit_PE;
   Float_t         H3_D0Fit_PX;
   Float_t         H3_D0Fit_PY;
   Float_t         H3_D0Fit_PZ;
   Float_t         H3_ReFit_PE;
   Float_t         H3_ReFit_PX;
   Float_t         H3_ReFit_PY;
   Float_t         H3_ReFit_PZ;
   Double_t        H3_ProbNNpi;
   Double_t        H3_ProbNNk;
   Double_t        H3_ProbNNghost;
   Int_t           H4_ID;
   Double_t        H4_PE;
   Double_t        H4_PX;
   Double_t        H4_PY;
   Double_t        H4_PZ;
   Float_t         H4_D0Fit_PE;
   Float_t         H4_D0Fit_PX;
   Float_t         H4_D0Fit_PY;
   Float_t         H4_D0Fit_PZ;
   Float_t         H4_ReFit_PE;
   Float_t         H4_ReFit_PX;
   Float_t         H4_ReFit_PY;
   Float_t         H4_ReFit_PZ;
   Double_t        H4_ProbNNpi;
   Double_t        H4_ProbNNk;
   Double_t        H4_ProbNNghost;
   Int_t           piSoft_ID;
   Double_t        piSoft_PE;
   Double_t        piSoft_PX;
   Double_t        piSoft_PY;
   Double_t        piSoft_PZ;
   Float_t         piSoft_D0Fit_PE;
   Float_t         piSoft_D0Fit_PX;
   Float_t         piSoft_D0Fit_PY;
   Float_t         piSoft_D0Fit_PZ;
   Float_t         piSoft_ReFit_PE;
   Float_t         piSoft_ReFit_PX;
   Float_t         piSoft_ReFit_PY;
   Float_t         piSoft_ReFit_PZ;
   Double_t        piSoft_ProbNNk;
   Double_t        piSoft_ProbNNpi;
   Double_t        piSoft_ProbNNghost;
   Double_t        s12;
   Double_t        s14;
   Double_t        s23;
   Double_t        s34;
   Double_t        s13;
   Double_t        s24;
   Double_t        s123;
   Double_t        s124;
   Double_t        s134;
   Double_t        s234;
   Double_t        s1234;
   Float_t         s12_D0Fit;
   Float_t         s14_D0Fit;
   Float_t         s23_D0Fit;
   Float_t         s34_D0Fit;
   Float_t         s13_D0Fit;
   Float_t         s24_D0Fit;
   Float_t         s123_D0Fit;
   Float_t         s124_D0Fit;
   Float_t         s134_D0Fit;
   Float_t         s234_D0Fit;
   Float_t         s1234_D0Fit;
   Float_t         s12_ReFit;
   Float_t         s14_ReFit;
   Float_t         s23_ReFit;
   Float_t         s34_ReFit;
   Float_t         s13_ReFit;
   Float_t         s24_ReFit;
   Float_t         s123_ReFit;
   Float_t         s124_ReFit;
   Float_t         s134_ReFit;
   Float_t         s234_ReFit;
   Float_t         s1234_ReFit;
   Double_t        D0_TripleProduct;
   Float_t         D0_D0Fit_TripleProduct;
   Float_t         D0_ReFit_TripleProduct;

   // List of branches
   TBranch        *b_eventNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_totCandidates;   //!
   TBranch        *b_nCandidate;   //!
   TBranch        *b_nPVs;   //!
   TBranch        *b_nTracks;   //!
   TBranch        *b_Polarity;   //!
   TBranch        *b_Dst_L0Global_TIS;   //!
   TBranch        *b_D0_L0HadronDecision_TOS;   //!
   TBranch        *b_D0_Hlt1TrackMVADecision_TOS;   //!
   TBranch        *b_D0_Hlt1TwoTrackMVADecision_TOS;   //!
   TBranch        *b_PV_X;   //!
   TBranch        *b_PV_Y;   //!
   TBranch        *b_PV_Z;   //!
   TBranch        *b_PV_XERR;   //!
   TBranch        *b_PV_YERR;   //!
   TBranch        *b_PV_ZERR;   //!
   TBranch        *b_D0Fit_status;   //!
   TBranch        *b_D0Fit_chi2;   //!
   TBranch        *b_D0Fit_nDOF;   //!
   TBranch        *b_ReFit_status;   //!
   TBranch        *b_ReFit_chi2;   //!
   TBranch        *b_ReFit_nDOF;   //!
   TBranch        *b_Dst_M;   //!
   TBranch        *b_Dst_D0Fit_M;   //!
   TBranch        *b_Dst_ReFit_M;   //!
   TBranch        *b_Dst_PE;   //!
   TBranch        *b_Dst_PX;   //!
   TBranch        *b_Dst_PY;   //!
   TBranch        *b_Dst_PZ;   //!
   TBranch        *b_Dst_D0Fit_P;   //!
   TBranch        *b_Dst_ReFit_P;   //!
   TBranch        *b_D0_M;   //!
   TBranch        *b_D0_D0Fit_M;   //!
   TBranch        *b_D0_ReFit_M;   //!
   TBranch        *b_D0_PE;   //!
   TBranch        *b_D0_D0Fit_P;   //!
   TBranch        *b_D0_ReFit_P;   //!
   TBranch        *b_D0_IP;   //!
   TBranch        *b_D0_IPCHI2;   //!
   TBranch        *b_D0_FD;   //!
   TBranch        *b_D0_FDCHI2;   //!
   TBranch        *b_D0_ENDVERTEX_X;   //!
   TBranch        *b_D0_ENDVERTEX_Y;   //!
   TBranch        *b_D0_ENDVERTEX_Z;   //!
   TBranch        *b_D0_ENDVERTEX_XERR;   //!
   TBranch        *b_D0_ENDVERTEX_YERR;   //!
   TBranch        *b_D0_ENDVERTEX_ZERR;   //!
   TBranch        *b_H1_ID;   //!
   TBranch        *b_H1_PE;   //!
   TBranch        *b_H1_PX;   //!
   TBranch        *b_H1_PY;   //!
   TBranch        *b_H1_PZ;   //!
   TBranch        *b_H1_D0Fit_PE;   //!
   TBranch        *b_H1_D0Fit_PX;   //!
   TBranch        *b_H1_D0Fit_PY;   //!
   TBranch        *b_H1_D0Fit_PZ;   //!
   TBranch        *b_H1_ReFit_PE;   //!
   TBranch        *b_H1_ReFit_PX;   //!
   TBranch        *b_H1_ReFit_PY;   //!
   TBranch        *b_H1_ReFit_PZ;   //!
   TBranch        *b_H1_ProbNNpi;   //!
   TBranch        *b_H1_ProbNNk;   //!
   TBranch        *b_H1_ProbNNghost;   //!
   TBranch        *b_H2_ID;   //!
   TBranch        *b_H2_PE;   //!
   TBranch        *b_H2_PX;   //!
   TBranch        *b_H2_PY;   //!
   TBranch        *b_H2_PZ;   //!
   TBranch        *b_H2_D0Fit_PE;   //!
   TBranch        *b_H2_D0Fit_PX;   //!
   TBranch        *b_H2_D0Fit_PY;   //!
   TBranch        *b_H2_D0Fit_PZ;   //!
   TBranch        *b_H2_ReFit_PE;   //!
   TBranch        *b_H2_ReFit_PX;   //!
   TBranch        *b_H2_ReFit_PY;   //!
   TBranch        *b_H2_ReFit_PZ;   //!
   TBranch        *b_H2_ProbNNpi;   //!
   TBranch        *b_H2_ProbNNk;   //!
   TBranch        *b_H2_ProbNNghost;   //!
   TBranch        *b_H3_ID;   //!
   TBranch        *b_H3_PE;   //!
   TBranch        *b_H3_PX;   //!
   TBranch        *b_H3_PY;   //!
   TBranch        *b_H3_PZ;   //!
   TBranch        *b_H3_D0Fit_PE;   //!
   TBranch        *b_H3_D0Fit_PX;   //!
   TBranch        *b_H3_D0Fit_PY;   //!
   TBranch        *b_H3_D0Fit_PZ;   //!
   TBranch        *b_H3_ReFit_PE;   //!
   TBranch        *b_H3_ReFit_PX;   //!
   TBranch        *b_H3_ReFit_PY;   //!
   TBranch        *b_H3_ReFit_PZ;   //!
   TBranch        *b_H3_ProbNNpi;   //!
   TBranch        *b_H3_ProbNNk;   //!
   TBranch        *b_H3_ProbNNghost;   //!
   TBranch        *b_H4_ID;   //!
   TBranch        *b_H4_PE;   //!
   TBranch        *b_H4_PX;   //!
   TBranch        *b_H4_PY;   //!
   TBranch        *b_H4_PZ;   //!
   TBranch        *b_H4_D0Fit_PE;   //!
   TBranch        *b_H4_D0Fit_PX;   //!
   TBranch        *b_H4_D0Fit_PY;   //!
   TBranch        *b_H4_D0Fit_PZ;   //!
   TBranch        *b_H4_ReFit_PE;   //!
   TBranch        *b_H4_ReFit_PX;   //!
   TBranch        *b_H4_ReFit_PY;   //!
   TBranch        *b_H4_ReFit_PZ;   //!
   TBranch        *b_H4_ProbNNpi;   //!
   TBranch        *b_H4_ProbNNk;   //!
   TBranch        *b_H4_ProbNNghost;   //!
   TBranch        *b_piSoft_ID;   //!
   TBranch        *b_piSoft_PE;   //!
   TBranch        *b_piSoft_PX;   //!
   TBranch        *b_piSoft_PY;   //!
   TBranch        *b_piSoft_PZ;   //!
   TBranch        *b_piSoft_D0Fit_PE;   //!
   TBranch        *b_piSoft_D0Fit_PX;   //!
   TBranch        *b_piSoft_D0Fit_PY;   //!
   TBranch        *b_piSoft_D0Fit_PZ;   //!
   TBranch        *b_piSoft_ReFit_PE;   //!
   TBranch        *b_piSoft_ReFit_PX;   //!
   TBranch        *b_piSoft_ReFit_PY;   //!
   TBranch        *b_piSoft_ReFit_PZ;   //!
   TBranch        *b_piSoft_ProbNNk;   //!
   TBranch        *b_piSoft_ProbNNpi;   //!
   TBranch        *b_piSoft_ProbNNghost;   //!
   TBranch        *b_s12;   //!
   TBranch        *b_s14;   //!
   TBranch        *b_s23;   //!
   TBranch        *b_s34;   //!
   TBranch        *b_s13;   //!
   TBranch        *b_s24;   //!
   TBranch        *b_s123;   //!
   TBranch        *b_s124;   //!
   TBranch        *b_s134;   //!
   TBranch        *b_s234;   //!
   TBranch        *b_s1234;   //!
   TBranch        *b_s12_D0Fit;   //!
   TBranch        *b_s14_D0Fit;   //!
   TBranch        *b_s23_D0Fit;   //!
   TBranch        *b_s34_D0Fit;   //!
   TBranch        *b_s13_D0Fit;   //!
   TBranch        *b_s24_D0Fit;   //!
   TBranch        *b_s123_D0Fit;   //!
   TBranch        *b_s124_D0Fit;   //!
   TBranch        *b_s134_D0Fit;   //!
   TBranch        *b_s234_D0Fit;   //!
   TBranch        *b_s1234_D0Fit;   //!
   TBranch        *b_s12_ReFit;   //!
   TBranch        *b_s14_ReFit;   //!
   TBranch        *b_s23_ReFit;   //!
   TBranch        *b_s34_ReFit;   //!
   TBranch        *b_s13_ReFit;   //!
   TBranch        *b_s24_ReFit;   //!
   TBranch        *b_s123_ReFit;   //!
   TBranch        *b_s124_ReFit;   //!
   TBranch        *b_s134_ReFit;   //!
   TBranch        *b_s234_ReFit;   //!
   TBranch        *b_s1234_ReFit;   //!
   TBranch        *b_D0_TripleProduct;   //!
   TBranch        *b_D0_D0Fit_TripleProduct;   //!
   TBranch        *b_D0_ReFit_TripleProduct;   //!

   DecayTree(TTree *tree=0);
   virtual ~DecayTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DecayTree_cxx
DecayTree::DecayTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/eos/lhcb/user/a/aburke/KmPimPipPip_prompt_2015_up_1of4.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/eos/lhcb/user/a/aburke/KmPimPipPip_prompt_2015_up_1of4.root");
      }
      f->GetObject("DecayTree",tree);

   }
   Init(tree);
}

DecayTree::~DecayTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DecayTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DecayTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DecayTree::Init(TTree *tree)
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

   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("totCandidates", &totCandidates, &b_totCandidates);
   fChain->SetBranchAddress("nCandidate", &nCandidate, &b_nCandidate);
   fChain->SetBranchAddress("nPVs", &nPVs, &b_nPVs);
   fChain->SetBranchAddress("nTracks", &nTracks, &b_nTracks);
   fChain->SetBranchAddress("Polarity", &Polarity, &b_Polarity);
   fChain->SetBranchAddress("Dst_L0Global_TIS", &Dst_L0Global_TIS, &b_Dst_L0Global_TIS);
   fChain->SetBranchAddress("D0_L0HadronDecision_TOS", &D0_L0HadronDecision_TOS, &b_D0_L0HadronDecision_TOS);
   fChain->SetBranchAddress("D0_Hlt1TrackMVADecision_TOS", &D0_Hlt1TrackMVADecision_TOS, &b_D0_Hlt1TrackMVADecision_TOS);
   fChain->SetBranchAddress("D0_Hlt1TwoTrackMVADecision_TOS", &D0_Hlt1TwoTrackMVADecision_TOS, &b_D0_Hlt1TwoTrackMVADecision_TOS);
   fChain->SetBranchAddress("PV_X", &PV_X, &b_PV_X);
   fChain->SetBranchAddress("PV_Y", &PV_Y, &b_PV_Y);
   fChain->SetBranchAddress("PV_Z", &PV_Z, &b_PV_Z);
   fChain->SetBranchAddress("PV_XERR", &PV_XERR, &b_PV_XERR);
   fChain->SetBranchAddress("PV_YERR", &PV_YERR, &b_PV_YERR);
   fChain->SetBranchAddress("PV_ZERR", &PV_ZERR, &b_PV_ZERR);
   fChain->SetBranchAddress("D0Fit_status", &D0Fit_status, &b_D0Fit_status);
   fChain->SetBranchAddress("D0Fit_chi2", &D0Fit_chi2, &b_D0Fit_chi2);
   fChain->SetBranchAddress("D0Fit_nDOF", &D0Fit_nDOF, &b_D0Fit_nDOF);
   fChain->SetBranchAddress("ReFit_status", &ReFit_status, &b_ReFit_status);
   fChain->SetBranchAddress("ReFit_chi2", &ReFit_chi2, &b_ReFit_chi2);
   fChain->SetBranchAddress("ReFit_nDOF", &ReFit_nDOF, &b_ReFit_nDOF);
   fChain->SetBranchAddress("Dst_M", &Dst_M, &b_Dst_M);
   fChain->SetBranchAddress("Dst_D0Fit_M", &Dst_D0Fit_M, &b_Dst_D0Fit_M);
   fChain->SetBranchAddress("Dst_ReFit_M", &Dst_ReFit_M, &b_Dst_ReFit_M);
   fChain->SetBranchAddress("Dst_PE", &Dst_PE, &b_Dst_PE);
   fChain->SetBranchAddress("Dst_PX", &Dst_PX, &b_Dst_PX);
   fChain->SetBranchAddress("Dst_PY", &Dst_PY, &b_Dst_PY);
   fChain->SetBranchAddress("Dst_PZ", &Dst_PZ, &b_Dst_PZ);
   fChain->SetBranchAddress("Dst_D0Fit_P", &Dst_D0Fit_P, &b_Dst_D0Fit_P);
   fChain->SetBranchAddress("Dst_ReFit_P", &Dst_ReFit_P, &b_Dst_ReFit_P);
   fChain->SetBranchAddress("D0_M", &D0_M, &b_D0_M);
   fChain->SetBranchAddress("D0_D0Fit_M", &D0_D0Fit_M, &b_D0_D0Fit_M);
   fChain->SetBranchAddress("D0_ReFit_M", &D0_ReFit_M, &b_D0_ReFit_M);
   fChain->SetBranchAddress("D0_PE", &D0_PE, &b_D0_PE);
   fChain->SetBranchAddress("D0_D0Fit_P", &D0_D0Fit_P, &b_D0_D0Fit_P);
   fChain->SetBranchAddress("D0_ReFit_P", &D0_ReFit_P, &b_D0_ReFit_P);
   fChain->SetBranchAddress("D0_IP", &D0_IP, &b_D0_IP);
   fChain->SetBranchAddress("D0_IPCHI2", &D0_IPCHI2, &b_D0_IPCHI2);
   fChain->SetBranchAddress("D0_FD", &D0_FD, &b_D0_FD);
   fChain->SetBranchAddress("D0_FDCHI2", &D0_FDCHI2, &b_D0_FDCHI2);
   fChain->SetBranchAddress("D0_ENDVERTEX_X", &D0_ENDVERTEX_X, &b_D0_ENDVERTEX_X);
   fChain->SetBranchAddress("D0_ENDVERTEX_Y", &D0_ENDVERTEX_Y, &b_D0_ENDVERTEX_Y);
   fChain->SetBranchAddress("D0_ENDVERTEX_Z", &D0_ENDVERTEX_Z, &b_D0_ENDVERTEX_Z);
   fChain->SetBranchAddress("D0_ENDVERTEX_XERR", &D0_ENDVERTEX_XERR, &b_D0_ENDVERTEX_XERR);
   fChain->SetBranchAddress("D0_ENDVERTEX_YERR", &D0_ENDVERTEX_YERR, &b_D0_ENDVERTEX_YERR);
   fChain->SetBranchAddress("D0_ENDVERTEX_ZERR", &D0_ENDVERTEX_ZERR, &b_D0_ENDVERTEX_ZERR);
   fChain->SetBranchAddress("H1_ID", &H1_ID, &b_H1_ID);
   fChain->SetBranchAddress("H1_PE", &H1_PE, &b_H1_PE);
   fChain->SetBranchAddress("H1_PX", &H1_PX, &b_H1_PX);
   fChain->SetBranchAddress("H1_PY", &H1_PY, &b_H1_PY);
   fChain->SetBranchAddress("H1_PZ", &H1_PZ, &b_H1_PZ);
   fChain->SetBranchAddress("H1_D0Fit_PE", &H1_D0Fit_PE, &b_H1_D0Fit_PE);
   fChain->SetBranchAddress("H1_D0Fit_PX", &H1_D0Fit_PX, &b_H1_D0Fit_PX);
   fChain->SetBranchAddress("H1_D0Fit_PY", &H1_D0Fit_PY, &b_H1_D0Fit_PY);
   fChain->SetBranchAddress("H1_D0Fit_PZ", &H1_D0Fit_PZ, &b_H1_D0Fit_PZ);
   fChain->SetBranchAddress("H1_ReFit_PE", &H1_ReFit_PE, &b_H1_ReFit_PE);
   fChain->SetBranchAddress("H1_ReFit_PX", &H1_ReFit_PX, &b_H1_ReFit_PX);
   fChain->SetBranchAddress("H1_ReFit_PY", &H1_ReFit_PY, &b_H1_ReFit_PY);
   fChain->SetBranchAddress("H1_ReFit_PZ", &H1_ReFit_PZ, &b_H1_ReFit_PZ);
   fChain->SetBranchAddress("H1_ProbNNpi", &H1_ProbNNpi, &b_H1_ProbNNpi);
   fChain->SetBranchAddress("H1_ProbNNk", &H1_ProbNNk, &b_H1_ProbNNk);
   fChain->SetBranchAddress("H1_ProbNNghost", &H1_ProbNNghost, &b_H1_ProbNNghost);
   fChain->SetBranchAddress("H2_ID", &H2_ID, &b_H2_ID);
   fChain->SetBranchAddress("H2_PE", &H2_PE, &b_H2_PE);
   fChain->SetBranchAddress("H2_PX", &H2_PX, &b_H2_PX);
   fChain->SetBranchAddress("H2_PY", &H2_PY, &b_H2_PY);
   fChain->SetBranchAddress("H2_PZ", &H2_PZ, &b_H2_PZ);
   fChain->SetBranchAddress("H2_D0Fit_PE", &H2_D0Fit_PE, &b_H2_D0Fit_PE);
   fChain->SetBranchAddress("H2_D0Fit_PX", &H2_D0Fit_PX, &b_H2_D0Fit_PX);
   fChain->SetBranchAddress("H2_D0Fit_PY", &H2_D0Fit_PY, &b_H2_D0Fit_PY);
   fChain->SetBranchAddress("H2_D0Fit_PZ", &H2_D0Fit_PZ, &b_H2_D0Fit_PZ);
   fChain->SetBranchAddress("H2_ReFit_PE", &H2_ReFit_PE, &b_H2_ReFit_PE);
   fChain->SetBranchAddress("H2_ReFit_PX", &H2_ReFit_PX, &b_H2_ReFit_PX);
   fChain->SetBranchAddress("H2_ReFit_PY", &H2_ReFit_PY, &b_H2_ReFit_PY);
   fChain->SetBranchAddress("H2_ReFit_PZ", &H2_ReFit_PZ, &b_H2_ReFit_PZ);
   fChain->SetBranchAddress("H2_ProbNNpi", &H2_ProbNNpi, &b_H2_ProbNNpi);
   fChain->SetBranchAddress("H2_ProbNNk", &H2_ProbNNk, &b_H2_ProbNNk);
   fChain->SetBranchAddress("H2_ProbNNghost", &H2_ProbNNghost, &b_H2_ProbNNghost);
   fChain->SetBranchAddress("H3_ID", &H3_ID, &b_H3_ID);
   fChain->SetBranchAddress("H3_PE", &H3_PE, &b_H3_PE);
   fChain->SetBranchAddress("H3_PX", &H3_PX, &b_H3_PX);
   fChain->SetBranchAddress("H3_PY", &H3_PY, &b_H3_PY);
   fChain->SetBranchAddress("H3_PZ", &H3_PZ, &b_H3_PZ);
   fChain->SetBranchAddress("H3_D0Fit_PE", &H3_D0Fit_PE, &b_H3_D0Fit_PE);
   fChain->SetBranchAddress("H3_D0Fit_PX", &H3_D0Fit_PX, &b_H3_D0Fit_PX);
   fChain->SetBranchAddress("H3_D0Fit_PY", &H3_D0Fit_PY, &b_H3_D0Fit_PY);
   fChain->SetBranchAddress("H3_D0Fit_PZ", &H3_D0Fit_PZ, &b_H3_D0Fit_PZ);
   fChain->SetBranchAddress("H3_ReFit_PE", &H3_ReFit_PE, &b_H3_ReFit_PE);
   fChain->SetBranchAddress("H3_ReFit_PX", &H3_ReFit_PX, &b_H3_ReFit_PX);
   fChain->SetBranchAddress("H3_ReFit_PY", &H3_ReFit_PY, &b_H3_ReFit_PY);
   fChain->SetBranchAddress("H3_ReFit_PZ", &H3_ReFit_PZ, &b_H3_ReFit_PZ);
   fChain->SetBranchAddress("H3_ProbNNpi", &H3_ProbNNpi, &b_H3_ProbNNpi);
   fChain->SetBranchAddress("H3_ProbNNk", &H3_ProbNNk, &b_H3_ProbNNk);
   fChain->SetBranchAddress("H3_ProbNNghost", &H3_ProbNNghost, &b_H3_ProbNNghost);
   fChain->SetBranchAddress("H4_ID", &H4_ID, &b_H4_ID);
   fChain->SetBranchAddress("H4_PE", &H4_PE, &b_H4_PE);
   fChain->SetBranchAddress("H4_PX", &H4_PX, &b_H4_PX);
   fChain->SetBranchAddress("H4_PY", &H4_PY, &b_H4_PY);
   fChain->SetBranchAddress("H4_PZ", &H4_PZ, &b_H4_PZ);
   fChain->SetBranchAddress("H4_D0Fit_PE", &H4_D0Fit_PE, &b_H4_D0Fit_PE);
   fChain->SetBranchAddress("H4_D0Fit_PX", &H4_D0Fit_PX, &b_H4_D0Fit_PX);
   fChain->SetBranchAddress("H4_D0Fit_PY", &H4_D0Fit_PY, &b_H4_D0Fit_PY);
   fChain->SetBranchAddress("H4_D0Fit_PZ", &H4_D0Fit_PZ, &b_H4_D0Fit_PZ);
   fChain->SetBranchAddress("H4_ReFit_PE", &H4_ReFit_PE, &b_H4_ReFit_PE);
   fChain->SetBranchAddress("H4_ReFit_PX", &H4_ReFit_PX, &b_H4_ReFit_PX);
   fChain->SetBranchAddress("H4_ReFit_PY", &H4_ReFit_PY, &b_H4_ReFit_PY);
   fChain->SetBranchAddress("H4_ReFit_PZ", &H4_ReFit_PZ, &b_H4_ReFit_PZ);
   fChain->SetBranchAddress("H4_ProbNNpi", &H4_ProbNNpi, &b_H4_ProbNNpi);
   fChain->SetBranchAddress("H4_ProbNNk", &H4_ProbNNk, &b_H4_ProbNNk);
   fChain->SetBranchAddress("H4_ProbNNghost", &H4_ProbNNghost, &b_H4_ProbNNghost);
   fChain->SetBranchAddress("piSoft_ID", &piSoft_ID, &b_piSoft_ID);
   fChain->SetBranchAddress("piSoft_PE", &piSoft_PE, &b_piSoft_PE);
   fChain->SetBranchAddress("piSoft_PX", &piSoft_PX, &b_piSoft_PX);
   fChain->SetBranchAddress("piSoft_PY", &piSoft_PY, &b_piSoft_PY);
   fChain->SetBranchAddress("piSoft_PZ", &piSoft_PZ, &b_piSoft_PZ);
   fChain->SetBranchAddress("piSoft_D0Fit_PE", &piSoft_D0Fit_PE, &b_piSoft_D0Fit_PE);
   fChain->SetBranchAddress("piSoft_D0Fit_PX", &piSoft_D0Fit_PX, &b_piSoft_D0Fit_PX);
   fChain->SetBranchAddress("piSoft_D0Fit_PY", &piSoft_D0Fit_PY, &b_piSoft_D0Fit_PY);
   fChain->SetBranchAddress("piSoft_D0Fit_PZ", &piSoft_D0Fit_PZ, &b_piSoft_D0Fit_PZ);
   fChain->SetBranchAddress("piSoft_ReFit_PE", &piSoft_ReFit_PE, &b_piSoft_ReFit_PE);
   fChain->SetBranchAddress("piSoft_ReFit_PX", &piSoft_ReFit_PX, &b_piSoft_ReFit_PX);
   fChain->SetBranchAddress("piSoft_ReFit_PY", &piSoft_ReFit_PY, &b_piSoft_ReFit_PY);
   fChain->SetBranchAddress("piSoft_ReFit_PZ", &piSoft_ReFit_PZ, &b_piSoft_ReFit_PZ);
   fChain->SetBranchAddress("piSoft_ProbNNk", &piSoft_ProbNNk, &b_piSoft_ProbNNk);
   fChain->SetBranchAddress("piSoft_ProbNNpi", &piSoft_ProbNNpi, &b_piSoft_ProbNNpi);
   fChain->SetBranchAddress("piSoft_ProbNNghost", &piSoft_ProbNNghost, &b_piSoft_ProbNNghost);
   fChain->SetBranchAddress("s12", &s12, &b_s12);
   fChain->SetBranchAddress("s14", &s14, &b_s14);
   fChain->SetBranchAddress("s23", &s23, &b_s23);
   fChain->SetBranchAddress("s34", &s34, &b_s34);
   fChain->SetBranchAddress("s13", &s13, &b_s13);
   fChain->SetBranchAddress("s24", &s24, &b_s24);
   fChain->SetBranchAddress("s123", &s123, &b_s123);
   fChain->SetBranchAddress("s124", &s124, &b_s124);
   fChain->SetBranchAddress("s134", &s134, &b_s134);
   fChain->SetBranchAddress("s234", &s234, &b_s234);
   fChain->SetBranchAddress("s1234", &s1234, &b_s1234);
   fChain->SetBranchAddress("s12_D0Fit", &s12_D0Fit, &b_s12_D0Fit);
   fChain->SetBranchAddress("s14_D0Fit", &s14_D0Fit, &b_s14_D0Fit);
   fChain->SetBranchAddress("s23_D0Fit", &s23_D0Fit, &b_s23_D0Fit);
   fChain->SetBranchAddress("s34_D0Fit", &s34_D0Fit, &b_s34_D0Fit);
   fChain->SetBranchAddress("s13_D0Fit", &s13_D0Fit, &b_s13_D0Fit);
   fChain->SetBranchAddress("s24_D0Fit", &s24_D0Fit, &b_s24_D0Fit);
   fChain->SetBranchAddress("s123_D0Fit", &s123_D0Fit, &b_s123_D0Fit);
   fChain->SetBranchAddress("s124_D0Fit", &s124_D0Fit, &b_s124_D0Fit);
   fChain->SetBranchAddress("s134_D0Fit", &s134_D0Fit, &b_s134_D0Fit);
   fChain->SetBranchAddress("s234_D0Fit", &s234_D0Fit, &b_s234_D0Fit);
   fChain->SetBranchAddress("s1234_D0Fit", &s1234_D0Fit, &b_s1234_D0Fit);
   fChain->SetBranchAddress("s12_ReFit", &s12_ReFit, &b_s12_ReFit);
   fChain->SetBranchAddress("s14_ReFit", &s14_ReFit, &b_s14_ReFit);
   fChain->SetBranchAddress("s23_ReFit", &s23_ReFit, &b_s23_ReFit);
   fChain->SetBranchAddress("s34_ReFit", &s34_ReFit, &b_s34_ReFit);
   fChain->SetBranchAddress("s13_ReFit", &s13_ReFit, &b_s13_ReFit);
   fChain->SetBranchAddress("s24_ReFit", &s24_ReFit, &b_s24_ReFit);
   fChain->SetBranchAddress("s123_ReFit", &s123_ReFit, &b_s123_ReFit);
   fChain->SetBranchAddress("s124_ReFit", &s124_ReFit, &b_s124_ReFit);
   fChain->SetBranchAddress("s134_ReFit", &s134_ReFit, &b_s134_ReFit);
   fChain->SetBranchAddress("s234_ReFit", &s234_ReFit, &b_s234_ReFit);
   fChain->SetBranchAddress("s1234_ReFit", &s1234_ReFit, &b_s1234_ReFit);
   fChain->SetBranchAddress("D0_TripleProduct", &D0_TripleProduct, &b_D0_TripleProduct);
   fChain->SetBranchAddress("D0_D0Fit_TripleProduct", &D0_D0Fit_TripleProduct, &b_D0_D0Fit_TripleProduct);
   fChain->SetBranchAddress("D0_ReFit_TripleProduct", &D0_ReFit_TripleProduct, &b_D0_ReFit_TripleProduct);
   Notify();
}

Bool_t DecayTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DecayTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DecayTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DecayTree_cxx
