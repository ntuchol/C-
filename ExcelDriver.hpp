// ExcelDriver.hpp
//
// Excel driver class. This class is for VISUALISATION only
//
// Using std::vector<double>
//
// (C) Datasim Education BV 2003 - 2012
//

#ifndef ExcelDriver_HPP
#define ExcelDriver_HPP

// !!!! RIGHT VERSION OF OFFICE!!!!!!
#include "UtilitiesDJD/ExcelDriver/ExcelImports.cpp" // Contains all versions of Office

// STL list class.
#include <list>
#include <vector>

using namespace std;

typedef std::vector<vector<double> > NumericMatrix;

// Excel driver class definition. Contains functionality to add charts 
// and matrices. Hides all COM details. COM exceptions are re-thrown
// as STL strings.

class ExcelDriver
{
private:
	// Private member data.
	Excel::_ApplicationPtr xl;		// Pointer to Excel.
	long curDataColumn;				// Current column of 'Chart Data'

	// Writes label and vector to cells in horizontal direction.
	void ToSheetHorizontal( Excel::_WorksheetPtr sheet,
					long sheetRow, long sheetColumn,
					const std::string& label,const std::vector<double> & values );

	// Writes label and vector to cells in vertical direction.
	void ToSheetVertical( Excel::_WorksheetPtr sheet,
					long sheetRow, long sheetColumn,
					const std::string& label, const std::vector<double> & values );


	// Throw COM error as string.
	void ThrowAsString( _com_error & error );

public:
	// Constructor. Starts Excel in invisible mode.
	ExcelDriver();

	// Destructor.
	virtual ~ExcelDriver();
	

	// Access to single, shared instance of ExcelDriver (singleton).
	static ExcelDriver& Instance();

	// Create chart with a number of functions. The arguments are:
	//  x:			vector with input values
	//  labels:		labels for output values
	//  vectorList: list of vectors with output values.
	//  chartTitle:	title of chart
	//  xTitle:		label of x axis
	//  yTitle:		label of y axis
	void CreateChart(const std::vector<double> & x, const list<string> & labels, 
		const list<std::vector<double> > & vectorList, const std::string& chartTitle, 
		const std::string& xTitle = "X", const std::string& yTitle = "Y");



    // Create chart with a number of functions. The arguments are:
	//  x:			vector with input values
	//  y:			vector with output values.
	//  chartTitle:	title of chart
	//  xTitle:		label of x axis
	//  yTitle:		label of y axis
	void CreateChart(const std::vector<double> & x, const std::vector<double> & y, const std::string& chartTitle, 
				 const std::string& xTitle = "X", const std::string& yTitle = "Y");


	void MakeVisible( bool b);

	// For debugging, for example
	void printStringInExcel(const string& s, long rowNumber, long colNumber, 
						const string& sheetName);
	void printStringInExcel(const list<string>& s, long rowNumber, long colNumber, 
						const string& sheetName);
};

#endif