// ExcelMechanisms.hpp
//
// Useful functions for use with Excel.
//
// (C) Datasim Education BV 2005-2012 
//

#ifndef ExcelMechanisms_HPP
#define ExcelMechanisms_HPP

#include "UtilitiesDJD/BitsAndPieces/StringConversions.hpp"
#include <string>
#include <list>
#include <vector>
using namespace std;

typedef std::vector<vector<double>> NumericMatrix;

// Print one line graph
void printOneExcel(const std::vector<double>& x,						
					const std::vector<double>& functionResult,
					const std::string& title = string("Title"), 
					const std::string& horizontal = string("X"), 
					const std::string& vertical = string("Y"),
					const std::string& legend = string("Y"));

// Print two line graphs for comparison
void printPairExcel(const std::vector<double>& x,						
					const std::vector<double>& Arr1, const std::vector<double>& Arr2,
					const std::string& title = string("Title"), 
					const std::string& horizontal = string("X"), 
					const std::string& vertical = string("Y"),
					const std::string& legend = string("*"), 
					const std::string& leg1 = string("1"), const std::string& leg2=string("2"));

// Print multiple lines on one graph
void printInExcel(const std::vector<double>& x,						// X array
					const list<std::string>& labels,					// Names of each vector
					const list<std::vector<double> >& functionResult,	// The list of Y values
					const std::string& title = string("Title"),
					const std::string& horizontal = string("X"), 
					const std::string& vertical = string("Y"));


#endif