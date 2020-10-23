#pragma once

#include "itensor/all.h"
#include <vector>
#include <string>
#include <complex>

using namespace itensor;
using namespace std;



double Entropy(MPS&  psi, const int i, vector<double> &sing_vals, const double r);
// Bond Dim
int BondDim(const MPS &psi, const int i) ;

// < Sz_i >
double Sz(MPS& psi, const itensor::BasicSiteSet<itensor::SpinHalfSite>& sites, const int i);

//< Sp_i Sm_i+4 >
complex<double> Correlation(MPS& psi, const itensor::BasicSiteSet<itensor::SpinHalfSite>& sites, const string op_name1, const string op_name2, const int i, const int j);

complex<double> SzCorrelation (MPS& psi, const itensor::BasicSiteSet<itensor::SpinHalfSite>& sites, const string op_name1, const string op_name2, const int i );

//EgergyKin + EnergyPot at site i (i,i+2,i+4)

double Energy(MPS& psi, const itensor::BasicSiteSet<itensor::SpinHalfSite> & sites, const int i) ;

//Current(i,i+4) + Current_z at site i (i,i+2,i+4)
double Q1minus(MPS& psi, const itensor::BasicSiteSet<itensor::SpinHalfSite> & sites, const int i) ;
