#define DecayTree_cxx
#include "practice.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void DecayTree::Loop()
{
//   In a ROOT session, you can do:
//      root> .L DecayTree.C
//      root> DecayTree t
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

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      
      
      
      // PIDs ( Hi_ID for iE[1,4] ):
      // pi+ = 211, pi- = -211, K+ = 321, K- = -321
      
      double D0_px = H1_PX + H2_PX + H3_PX + H4_PX;
      double D0_py = H1_PY + H2_PY + H3_PY + H4_PY;
      double D0_pz = H1_PZ + H2_PZ + H3_PZ + H4_PZ;
      double D0_pp = pow(D0_px, 2) + pow(D0_py, 2) + pow(D0_pz, 2);
      double TOT_pe = H1_PE + H2_PE + H3_PE + H4_PE;
      double D0_m = sqrt( pow(TOT_pe, 2) - D0_pp );
      h_D0_m->Fill(D0_m);

      double Dst_px = D0_px + piSoft_PX;
      double Dst_py = D0_py + piSoft_PY;
      double Dst_pz = D0_pz + piSoft_PZ;
      double Dst_pp = pow(Dst_px, 2) + pow(Dst_py, 2) + pow(Dst_pz, 2);
      TOT_pe = piSoft_PE + sqrt(D0_pp + pow(D0_m, 2));
      double Dst_m = sqrt( pow(TOT_pe, 2) - Dst_pp );
      h_delta_m->Fill((Dst_m - D0_m)/1000);
   }
   
   TFile output("test.root","RECREATE");
   output.cd();
   h_D0_m->Write();
   h_delta_m->Write();
   TDirectory* dir = output.mkdir("my_dir");
   dir->cd();
   h_D0_m->Write();
   TDirectory* dir2 = dir->mkdir("my_other_dir");
   dir2->cd();
   h_delta_m->Write();
   output.Close();
}

int practice() {
  DecayTree t;
  t.Loop();
  
  return 0;
}
