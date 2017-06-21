{
    //ROOT::EnableImplicitMT();

    TFile *_file0 = TFile::Open("DVntuple-March04A.root");
    
    ROOT::Experimental::TDataFrame d("myXiTuple/XiDecayTuple", _file0);

    auto cut_LL_function = [](int d){return d==3;};
    auto cut_DD_function = [](int d){return d==5;};

    auto cutLL = d.Filter(cut_LL_function, {"DecayPr_TRACK_Type"});
    auto cutDD = d.Filter(cut_DD_function, {"DecayPr_TRACK_Type"});

    auto hist_LL = cutLL.Histo1D(TH1F("Lambda_M_LL", "LL", 100, 1110, 1120), "Lambda_M");
    auto hist_DD = cutDD.Histo1D(TH1F("Lambda_M_DD", "DD", 100, 1110, 1120), "Lambda_M");

    hist_DD->Draw("SAME");
    hist_LL->Draw();
}
