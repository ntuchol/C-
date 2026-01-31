// TestComplexStep.cpp
//
// Complex-step method to compute approximate derivatives.
// Example is scalar-valued function of a scalar argument.
//
// https://pdfs.semanticscholar.org/3de7/e8ae217a4214507b9abdac66503f057aaae9.pdf
//
// http://mdolab.engin.umich.edu/sites/default/files/Martins2003CSD.pdf
//
// (C) Datasim Education BV 20199
// dduffy@datasim.nl
//

#include <functional>
#include <complex>
#include <iostream>
#include <iomanip>
#include <cmath>

// Notation and function spaces
using value_type = double;

template <typename T>
	using FunctionType = std::function < T(const T& c)>;
using CFunctionType = FunctionType<std::complex<value_type>>;


// Test case from Squire&Trapp 1998
template <typename T> T SquireTrapp(const T& t)
{
	T n1 = std::exp(t);
	T d1 = std::sin(t);
	T d2 = std::cos(t);

	return n1 / (d1*d1*d1 + d2*d2*d2);
}

template <typename T> T func2(const T& t)
{ // Derivative of e^t, sanity check

	return std::exp(std::pow(t,1));
//	return std::exp(std::pow(t, 5));

}
	
value_type Derivative(const CFunctionType& f, value_type x, value_type h)
{ // df/dx at x using tbe Complex step method

	std::complex<value_type> z(x, h); // x + ih, i = sqrt(-1)
	return std::imag(f(z)) / h;
}

int main()
{
	// Squire Trapp
	double x = 1.5;	double h = 0.1;
	do
	{
		std::cout << std::setprecision(12) << Derivative(SquireTrapp<std::complex<value_type>>, x, h) << '\n';
		h *= 0.1;

	} while (h > 1.0e-300);

	// Exponential function (101 sanity check)
	x = 5.0;
	h = 1.0e-10;
	std::cout << "Exponential 1: " << std::setprecision(12) << Derivative(func2<std::complex<value_type>>, x, h) << '\n';

	return 0;
}