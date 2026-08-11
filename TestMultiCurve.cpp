// TestMultiCurve.cpp
//
// Displaying multple curves on one Excel sheet.
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

	std::vector<double> vec1(N,0.0);
	for (long j = 0; j < vec1.size(); ++j)
	{
		vec1[j] = pow(-1.0, j);
	}

	std::vector<double> vec2(vec1.size()); 
	std::vector<double> vec3(vec1.size()); 
	std::vector<double> vec4(vec1.size());

	for (long j = 0; j < vec2.size(); ++j)
	{
		vec2[j] = vec1[j] + 2.0;
		vec3[j] = vec1[j] - 3.0;
		vec4[j] = vec1[j] + vec2[j];
	}
	// Now Excel output in one sheet for comparison purpposes
	std::list<std::string> labels;							// Names of each vector
	std::list<std::vector<double> > functionResult;	// The list of Y values

	labels.push_back("Array One");
	labels.push_back("Array Two");
	labels.push_back("Array Three");
	labels.push_back("Array Four");

	functionResult.push_back(vec1);
	functionResult.push_back(vec2);
	functionResult.push_back(vec3);
	functionResult.push_back(vec4); 
	
	std::cout << "Data has been created\n";

	try 
	{
		printInExcel(x,labels, functionResult, 
						string("All In One"), string("Time"), string("Value"));
	}
	catch(DatasimException& e)
	{
		e.print();
	}

	return 0;
}
