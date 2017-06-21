{

auto LamMLL = new TH1D("LamMLL", "Lambda mass LL", 150, 1108.5, 1122.5); 
auto LamMDD = new TH1D("LamMDD", "Lambda mass DD", 150, 1108.5, 1122.5); 


auto _file0 = TFile::Open("DVntuple-March04A.root");
TTreeReader myReader("myXiTuple/XiDecayTuple", _file0);
TTreeReaderValue<Double_t> Lambda_M(myReader, "Lambda_M");
TTreeReaderValue<Int_t> DecayPr_TRACK_Type(myReader, "DecayPr_TRACK_Type");

while(myReader.Next()) {
   if(*DecayPr_TRACK_Type == 3)
       LamMLL->Fill(*Lambda_M);
   else if (*DecayPr_TRACK_Type == 5)
       LamMDD->Fill(*Lambda_M);
}

gStyle->SetPalette(kViridis);
TCanvas *C = new TCanvas();

gStyle->SetOptTitle(kFALSE);
gStyle->SetOptStat(0);

LamMDD->Draw("");
LamMLL->Draw("SAME");
gPad->BuildLegend();

}
