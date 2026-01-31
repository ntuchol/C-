// TestHOF101.cpp
//
// Testing lambda functions; build complex functions using algebra. 
// A vector space of functions.
// In  this case compute x - e^5 = 0 using least squares and Brent's method
// x == 148.413
//
// DD

#include <functional>
#include <cmath>
#include <iostream>
#include <boost/math/tools/minima.hpp>

template <typename T>
	std::function<T (T)> operator * (std::function<T (T)>& f, std::function<T (T)>& g)
{ // Addition

	return [=](T x)
	{
		return  f(x) * g(x);
	};
}

template <typename T>
	std::function<T (T)> operator - (std::function<T (T)>& f, T a)
{ // Addition

		return [=](T x)
		{
			return  f(x) - a;
		};
}



template <typename T>
	std::function<T (T)> log(std::function<T (T)>& f)
{ // log

		return [=](T x)
		{
			return  std::log(f(x));
		};
}

double funcGlobal(double x)
{
	return (std::log(x) - 5.0)* (std::log(x) - 5.0);
}

int main()
{

	// Define interval [min, max] where search will take place
	double min = 5.0;
	double max = 300.0;

	int bits = 50;
	boost::uintmax_t maxIter = 10000;

	// Standard function call
	std::pair<double, double> result = boost::math::tools::brent_find_minima(funcGlobal, min, max, bits, maxIter);
	std::cout << "Abscissa, value f(x) Tricky function: " << result.first << ", " << result.second << std::endl;

	// Now use lambda and algebra; assemble functions incrementally
	std::function<double(double)> f1 = [](double x) { return std::log(x); };
	decltype(f1) f2 = f1 - 5.0;
	decltype(f2) funcHOF = f2*f2;

	std::pair<double, double> result2 = boost::math::tools::brent_find_minima(funcHOF, min, max, bits, maxIter);
	std::cout << "Abscissa, value f(x) Tricky function: " << result2.first << ", " << result2.second << std::endl;

}