// TestMatrixMaxElements.cpp
//
// Find the vector each of whose elements is maximum value
// of the corresponding row of the matrix.
//
// !! use Preprocessor _SCL_SECURE_NO_WARNINGS
//
// This problem is parallelisable .. used OpenMP (check for races).
//
// (C) Datasim Education BV 2016
//

#include <boost/numeric/ublas/vector.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/matrix_proxy.hpp>
#include <boost/numeric/ublas/io.hpp>
#include <iostream>
//#include <omp.h>

// Useful shorthand
using value_type = double;
using Vector = boost::numeric::ublas::vector<value_type>;
using NumericMatrix = boost::numeric::ublas::matrix<value_type>;
using NumericMatrixRow = boost::numeric::ublas::matrix_row<NumericMatrix>;

Vector MaxRowValues(NumericMatrix& matrix) // const not allowed
{
//	boost::numeric::ublas::vector<double> result;
	Vector result(matrix.size1());
	
	for (std::size_t i = 0; i < matrix.size1(); ++i)
	{
		NumericMatrixRow mr(matrix, i);
		for (std::size_t j = 0; j < mr.size(); ++j)
		{
			// Boost uBLAS is STL-compatible
			result(i) = *(std::max_element(std::begin(mr), std::end(mr)));
		}
	}
	
	return result;
}


int main() 
{
	// Square matrix	
	unsigned NR = 2000; unsigned NC = 2000;
	NumericMatrix mat(NR, NC);
	for (unsigned i = 0; i < mat.size1(); ++i)
	{
		for (unsigned j = 0; j < mat.size2(); ++j)
		{
			mat(i, j) = 0.0;
		}
		mat(i, i) = static_cast<double>(i);
	}
	
//	std::cout << mat << "\n//////////////////////////////////\n";

	auto maxVec = MaxRowValues(mat);
	std::cout << maxVec;

	return 0;
}
