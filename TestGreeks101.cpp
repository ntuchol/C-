// TestGreeks101.cpp
// 
// Test code.
//
// Computing theta and vega (as examples) using the Complex Step Method and
// compare to exact solution.
// We use the Faddeeva (Kramp) function.
//
// Use call options as test case. We have separate functions for double and complex
// cases. They could be 'merged' into one template function, later. It is an optimisation step. 
//
// The method can be generalised to multidimensioanl space.
//
// (C) Datasim Education BV 2018-2019
//

#include "Faddeeva.hh"
#include <complex>
#include <iostream>
#include <cmath>
#include <iomanip>


double K = 65.0;
//double T = 0.25;
double r = 0.08;
double b = 0.05;
//double v = 0.3;

double S = 55.0;

template <typename T>
	T n(T x)
{ // pdf

	const T A = 1.0 / std::sqrt(2.0 * 3.14159265358979323846);
	return A * std::exp(-x*x*0.5);
}

double N(double x)
{ // cdf

	return std::erfc(-x / std::sqrt(2.0))/2.0;
}

std::complex<double> N(std::complex<double>& z)
{
	double relErr = 1.0e-16;
	return Faddeeva::erfc(-z / std::sqrt(2.0), relErr) / 2.0;
}

double BS(double T, double v)
{ // Call option

	double LOG = std::log(S/K);
	double den = v*std::sqrt(T);
	
	double d1 = (LOG + (b + v*v / 2)*T) / den;
	double d2 = d1 - den;

	double result = S * N(d1)*std::exp((b-r)*T) - K*std::exp(-r*T)* N(d2);

	return result;

}


std::complex<double> BS(std::complex<double>& T, std::complex<double>& v)
{
	std::complex<double> a = S;
	std::complex<double> LOG = std::log(S / K);
	std::complex<double> den = v*std::sqrt(T);

	std::complex<double> d1 = (LOG + (b + v*v * 0.5)*T) / den;
	std::complex<double> d2 = d1 - den;

	std::complex<double> result = S * N(d1)*std::exp((b - r)*T) - K*std::exp(-r*T)* N(d2);

	return result;
}

double BSTheta(double T, double v)
{
	double den = v * std::sqrt(T);
	double d1 = (std::log(S / K) + (b + (v*v)*0.5) * T) / den;
	double d2 = d1 - den;

	double t1 = (S* std::exp((b - r)*T) * n(d1) * v * 0.5) / std::sqrt(T);
	double t2 = (b - r)*(S * std::exp((b - r)*T) * N(d1));
	double t3 = r * K * std::exp(-r * T) * N(d2);

	return  -(t1 + t2 + t3);

}




std::complex<double> BSTheta(std::complex<double> T, std::complex<double>& v)
{
	
	double h = 1.0e-43;
	std::complex<double> z1(std::real(T), h );
	std::complex<double> z2(std::real(v), 0);
	std::complex<double> result = BS(z1,z2);

	return -std::imag(result) / h;
}


double BSVega(double T, double v)
{
	double den = v * std::sqrt(T);
	double d1 = (std::log(S / K) + (b + (v*v)*0.5) * T) / den;

	return S * std::exp((b - r)*T) * n(d1) * std::sqrt(T);
}

std::complex<double> BSvega(std::complex<double> T, std::complex<double>& v)
{
	
	double h = 1.0e-16; // hard-coded
	std::complex<double> z1(std::real(T), 0);
	std::complex<double> z2(std::real(v), h);
	std::complex<double> result = BS(z1, z2);

	return std::imag(result) / h;
}

int main()
{
	double relErr = 1.0e-16;
	std::complex<double> z(1.0, 0.01); auto v = Faddeeva::erfc(z, relErr);
	std::cout << v << '\n';

	std::complex<double> TC(0.25, 0.0); std::complex<double> vC(0.3, 0.0);
	std::cout << std::setprecision(16) << "CS " << BS(TC, vC) << ", " << BSTheta(TC,vC) << ", " << BSvega(TC, vC) <<  '\n';

	double TR(0.25); double vR(0.3);
	std::cout << "Exact " << std::setprecision(16)<< BS(TR,vR) << ", " << BSTheta(TR,vR) << ", " <<  BSVega(TR, vR) << '\n';

	return 0;
}