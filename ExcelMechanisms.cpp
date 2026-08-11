// ExcelMechanisms.cpp
//
// Useful functions for use with Excel.
//
// 2005-11-29 DD kick-off
// 2005-12-16 DD Introduce exception handling (in about functions)
// 2006-2-2 DD print a tensor's matrices at intervals
// 2006-6-14 DD Bug fix PrintInExcel
// 2008-8-6 DD printPairOneExcel()
// 2008-10-21 DD function to print f(x,y) functions
// 2009-1-11 DD associative matrix print
// 2009-1-22 DD PrintdifferenceinExcel
// 2009-6-26 DD use function object for displaying functions
// 2012-1-17 DD fur QN
// 2012-2-26 DD using STL vectors
//
// (C) Datasim Education BV 2005-2012

//

#ifndef ExcelMechanisms_CPP
#define ExcelMechanisms_CPP


#include "UtilitiesDJD/ExcelDriver/ExcelMechanisms.hpp"
#include "UtilitiesDJD/ExceptionClasses/DatasimException.hpp"
#include "UtilitiesDJD/ExcelDriver/ExcelDriver.hpp"
#include <list>
#include <iostream>
#include <vector>

// Hard-coded strings
const string comma(", ");
const string bracketL("[");
const string bracketR("]");

void printOneExcel(const std::vector<double>& x,						
					const std::vector<double>& functionResult,
					const std::string& title,
					const std::string& horizontal, 
					const std::string& vertical,
					const std::string& legend)
{ 
	// N.B. Excel has a limit of 8 characters; after that you get a run-time error

	// PREC: Type I
	if (x.size() != functionResult.size())
	{
		
		string tmp = string("sizes of vectors are X, Y: ") + getString(x.size()) + string(comma) + getString(functionResult.size());

		throw DatasimException(string("size mismatch of two vectors"), string("PrintOneExcel"),
			tmp);
	}


	cout << "Starting Excel\n";

	ExcelDriver& excel = ExcelDriver::Instance();

	excel.MakeVisible(true);		// Default is INVISIBLE!

	// Workaround
	list<std::string> legendList; legendList.push_back(legend);
	list<std::vector<double> > functionResultList; functionResultList.push_back(functionResult);

	excel.CreateChart(x, legendList, functionResultList, title, horizontal, vertical);
	
}

// Print two line graphs for comparison
void printPairExcel(const std::vector<double>& x,						
					const std::vector<double>& Arr1, const std::vector<double>& Arr2,
					const std::string& title, 
					const std::string& horizontal, 
					const std::string& vertical,
					const std::string& legend, const std::string& leg1, const std::string& leg2)
{
	if (x.size() != Arr1.size() || x.size() != Arr2.size())
	{
		
		string tmp = string("sizes of vectors are X, Y: ") + getString(x.size()) + string(comma) + getString(Arr1.size())
			+ getString(Arr2.size());

		throw DatasimException(string("size mismatch of two vectors"), string("PrintOneExcel"),
			tmp);
	}


	cout << "Starting Excel\n";

	ExcelDriver& excel = ExcelDriver::Instance();

	excel.MakeVisible(true);		// Default is INVISIBLE!

	// Workaround
	list<std::string> legendList; 
	legendList.push_back(legend + leg1);
	legendList.push_back(legend + leg2);

	list<std::vector<double> > functionResultList; 
	functionResultList.push_back(Arr1);
	functionResultList.push_back(Arr2);

	excel.CreateChart(x, legendList, functionResultList, title, horizontal, vertical);

}


void printInExcel(const std::vector<double>& x,		// X array
					const list<std::string>& labels,					// Names of each vector
					const list<std::vector<double> >& functionResult,	// The list of Y values
					const std::string& title,
					const std::string& horizontal, 
					const std::string& vertical)
{ // Print a list of Vectors in Excel. Each vector is the output of
  // a finite difference scheme for a scalar IVP

	// PREC: Type I
//	if (x.size() != labels.size() || x.size() != functionResult.size())
	// No cheque of x array size
	if (labels.size() != functionResult.size())
	{
		string tmp = "sizes of vectors are X, Y, Label: " + getString(x.size()) + comma +
			getString(functionResult.size()) + comma + getString(labels.size());

		throw DatasimException(string("size mismatch of vectors and labels"), string("PrintInExcel"),
			tmp);
	}


	cout << "Starting Excel\n";

	ExcelDriver& excel = ExcelDriver::Instance();

	excel.MakeVisible(true);		// Default is INVISIBLE!


	excel.CreateChart(x, labels, functionResult, title, horizontal, vertical);

}


#endif