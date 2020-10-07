int plot() {
  gStyle->SetOptStat(0);
  TCanvas* c = new TCanvas("c","plot.cxx canvas");
  c->SetTickx(); c->SetTicky();
  c->SetGridx(); c->SetGridy();
  TLegend* l = new TLegend(0.3, 0.2);
  l->SetHeader("","c");
  l->SetBorderSize(4);
  l->SetShadowColor(1);
  l->SetDrawOption("br");
  
  std::cout << "File... ";
  std::string filename; std::cin >> filename;
  TFile* file = new TFile(filename.c_str());
  
  TH1D* hist = new TH1D;
  while(hist->GetEntries() == 0){
    TIter next(gDirectory->GetListOfKeys());
    TKey* key;
    std::cout << "(CLASS TYPE : OBJECT NAME) in " << gDirectory->GetName() << std::endl;
    while((key = (TKey*)next())) {
      std::cout << "        " << key->GetClassName() << " : "
                              << key->ReadObj()->GetName() << std::endl;
    }

    std::cout << "open / draw... ";
    std::string choice; std::cin >> choice;
    
    next.Reset();
    while((key = (TKey*)next())) {
      if(key->ReadObj()->GetName() == choice) {
        if(gROOT->GetClass(key->GetClassName())->InheritsFrom("TDirectory")) {
          gDirectory->cd(choice.c_str());
            break;
        }
	hist = (TH1D*)key->ReadObj();
        hist->SetDirectory(0);
        hist->Draw("same");
        break;
      }
    }
  }

  file->Close();
  
  return 0;
}
