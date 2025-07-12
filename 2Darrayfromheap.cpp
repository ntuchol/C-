int **dynamicArray = new int *[ROWS]; 
for(int i = 0 ; i < ROWS ; i++)
    dynamicArray[i] = new int[COLUMNS];

double *myarray = new double[nrows * ncols]; 
// Access element at [i][j]: myarray[i * ncols + j]
#include <vector>
std::vector<std::vector<int>> matrix(ROWS, std::vector<int>(COLUMNS));