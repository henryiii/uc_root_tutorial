///////////////////
/// Define code ///
///////////////////

TH1 * lsbMaxIpHistBa = nullptr;
TH1 * signalIPChi2HistBa = nullptr;
TH1 * usbIPChi2HistBa = nullptr;
TH1 * lsbIPChi2HistBa = nullptr;
TH1 * bkgdIPChi2HistBa = nullptr;
TH1 * bsubbedIPChi2HistBa = nullptr;


///////////////////////
/// Initialize code ///
///////////////////////

// by default keep weights for all histrograms
// this allows proper addition of weighted hists
TH1::SetDefaultSumw2(kTRUE);

lsbMaxIpHistBa = new TH1D("Ba max IP","lsb max IP",100,0.,5.);
signalIPChi2HistBa = new TH1D("Ba IPChi2","signal window",100,0.,50.);
usbIPChi2HistBa = new TH1D("Ba usb IPChi2","upper sideband",100,0.,50.);
lsbIPChi2HistBa = new TH1D("Ba lsb IPChi2","lower sideband",100,0.,50.);
bkgdIPChi2HistBa = new TH1D("Ba bkgd IPChi2","sidebands",100,0.,50.);
bsubbedIPChi2HistBa = new TH1D("Ba bsubbed IPChi2","bkgd subtracted",100,0.,50.);


//////////////////////
/// Per event code ///
//////////////////////

// For Selectors, add * in front of all branch accesses
// and add GetEvent(entry); at the top


double DeltaM = Dstar_M-D0_M;
bool triggerDstar = 
       (D0Pi_IP_OWNPV>0.10 && D0Pi_PT>1700)
    || (D0K_IP_OWNPV>0.10 && D0K_PT>1700);
bool goodTag = triggerDstar && (D0_M>1850. && D0_M<1880. && abs(DeltaM-145.4)<2.0);

bool dplusKKPiMassWindow = Dbar_MM>1860. && Dbar_MM<1880.; 
bool dplusLowerSideband = Dbar_MM>1820. && Dbar_MM<1840.;
bool dplusUpperSideband = Dbar_MM>1900. && Dbar_MM<1920.;

if (goodTag && Dbar_TAU > 0.0002) {
    dplusKKPiMassHistB->Fill(Dbar_M);
    if (Dbar_PT > 1500.) {
        dplusKKPiMassHistBa->Fill(Dbar_M);
        if (dplusKKPiMassWindow)
            signalIPChi2HistBa->Fill(Dbar_IPCHI2_OWNPV);
        if (dplusUpperSideband)
            usbIPChi2HistBa->Fill(Dbar_IPCHI2_OWNPV);
        if (dplusLowerSideband)
            lsbIPChi2HistBa->Fill(Dbar_IPCHI2_OWNPV);
    }
}


//////////////////////
/// Graphical code ///
//////////////////////

TCanvas c1;

signalIPChi2HistBa->Draw();
c1.SaveAs("signalIPChi2HistBa.png");

usbIPChi2HistBa->Draw();
c1.SaveAs("usbIPChi2HistBa.png");

lsbIPChi2HistBa->Draw();
c1.SaveAs("lsbIPChi2HistBa.png");

bkgdIPChi2HistBa->Add(usbIPChi2HistBa,lsbIPChi2HistBa,0.5,0.5);
bkgdIPChi2HistBa->Draw();
c1.SaveAs("bkgdIPChi2HistBa.png");

bsubbedIPChi2HistBa->Add(signalIPChi2HistBa,bkgdIPChi2HistBa,1.0,-1.0);
bsubbedIPChi2HistBa->Draw();
TLine * line = new TLine(0.,0.,50.,0.);
line->Draw("same");
c1.SaveAs("bsubbedIPChi2HistBa.png");

