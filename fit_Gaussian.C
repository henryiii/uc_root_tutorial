#pragma once

#include <TMath.h>

struct fit_Gaussian {
    Double_t bin_width;
    /// Constructor initializes bin_width
    fit_Gaussian(Double_t bin_width_init) : bin_width(bin_width_init) {}
    /// This is called when you call the object
    Double_t operator() (Double_t *v, Double_t *par) {
        // Give nice names to values
        Double_t &x = v[0];
        Double_t &par0 = par[0];
        Double_t &mean = par[1];
        Double_t &width = par[2];
        Double_t &lin_b = par[3];
        Double_t &lin_m = par[4];
        Double_t arg = 0;
        if (par[2] != 0)
            arg = (x - mean)/width;
        // create a Gaussian
        Double_t fitval = par0*TMath::Exp(-0.5*arg*arg);
        // re-normalize to make par[0] the integral of the Gaussian, assuming 1 MeV bins
        fitval = (fitval*bin_width)/(TMath::Sqrt(TMath::TwoPi())*width);
        // add a linear background
        fitval = fitval + lin_b + x*lin_m;
        // we're done
        return fitval;
    }
};
