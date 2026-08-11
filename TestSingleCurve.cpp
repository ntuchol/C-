// TestSingleCurve.cpp
//
// Displaying a single curve on one Excel sheet.
//
// Modification dates:
//
// 2007-3-3 DD Kick-offs
// 2007-7-23 DD Some schemes (e.g. IE added)
// 2007-7-27 DD derivative-free scheme
// 2009-6-14 DD clean up
// 2012-1-17 DD for QN
//
// (C) Datasim Education BV 2005-2012
//


#include "UtilitiesDJD/ExcelDriver/ExcelMechanisms.hpp"
#include "UtilitiesDJD/Geometry/Range.cpp"
#include "UtilitiesDJD/ExceptionClasses/DatasimException.hpp"

#include <cmath>
#include <list>
#include <string>
#include <vector>

int main()
{
	// DON'T FORGET TO MODIFY EXCELIMPORTS.CPP for correct version of Excel.

	long N = 40;

	// Create abscissa x array
	std::vector<double> x(N,0.0);
	double T = 10.0;
	double h = T/double(N);
	x[0] = 0.0;
	x[x.size()-1] = T;
	for (long j = 1; j < x.size()-1; ++j)
	{
		x[j] = x[j-1] + h;
	}

	std:;vector<double> vec1(N,0.0);
	for (long j = 0; j < vec1.size(); ++j)
	{
		vec1[j] = pow(-1.0, j);
	}
	
	std::cout << "Data has been created\n";

	try 
	{
		printOneExcel(x,vec1,	std::string("1 array"), std::string("Time"), std::string("Value"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}

	try 
	{
		printOneExcel(x,vec1); // Default annotation settings
	}
	catch(DatasimException& e)
	{
		e.print();
	}

	return 0;
}
