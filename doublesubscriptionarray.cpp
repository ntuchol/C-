double matrix[3][4]; 
double initialized_matrix[2][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}}; 
#include <array>

std::array<std::array<double, 4>, 3> matrix_std; 
#include <vector>

std::vector<std::vector<double>> dynamic_matrix(3, std::vector<double>(4)); 
matrix[row_index][column_index] = value;
double retrieved_value = matrix[row_index][column_index];
