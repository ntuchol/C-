// TestBind101.cpp
//
// Function wrapper/bind survival guide. All those
// pesky syntax things in one place.
//
// In this case we bind a universal function to a class;
//
//	1. Static member function
//	2. Object  member function
//	3. Class data
//
// (C) Datasim Education BV 2016
//

#include <functional>
#include <iostream>


struct RandomClass
{ // Function object with extra member functions and data

	double _data;

	RandomClass(double data) : _data(data) {}

	double operator () (double factor)
	{
		return _data + factor;
	}

	double OneParam (double factor)
	{
		return _data + factor;
	}

	double TwoParam(double factor1, double factor2)
	{
		return _data + factor1 + factor2;
	}
	
	static double DoIt(double x)
	{
		return x*x;
	}

	void print() const
	{
		std::cout << _data;
	}
};

// Useful synonym to promote readability
template <typename T>
	using FunctionType = std::function<T(T t)>;

template <typename T>
	void print(const FunctionType<T>& f, T t)
{
	std::cout << f(t) << '\n';
}

int main()
{
	using namespace std::placeholders;  // for _1, _2, _3...

	FunctionType<double> f = std::bind(RandomClass::DoIt, _1);
	print(f, 4.0);
		
	RandomClass c2(3.0);
	f = std::bind(&RandomClass::OneParam, c2, _1);
	print(f, -4.0);

	f = std::bind(&RandomClass::TwoParam, c2, _1, 3.0);
	print(f, -4.0);

	// Use auto and let the compiler do the work
	auto f2 = std::bind(&RandomClass::TwoParam, c2, _1, 3.0);
	std::cout << "Auto " << f2(10.0) << '\n';

	auto g = std::bind(&RandomClass::_data, c2);
	std::cout << g() << '\n';

	return 0;
}