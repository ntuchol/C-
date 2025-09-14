#include <iostream>
#include <vector>

int main() {
    int numRows = 10;

    std::cout << "Pascal's Triangle (First " << numRows << " Rows):\n";

    std::vector<std::vector<int>> triangle;

    for (int i = 0; i < numRows; ++i) {
        std::vector<int> currentRow(i + 1);

        currentRow[0] = 1;
        if (i > 0) {
            currentRow[i] = 1;
        }

        for (int j = 1; j < i; ++j) {
            currentRow[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        triangle.push_back(currentRow);
    }

    for (int i = 0; i < numRows; ++i) {
        for (int k = 0; k < numRows - 1 - i; ++k) {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; ++j) {
            std::cout << triangle[i][j] << "   "; 
        }
        std::cout << std::endl; 
    }

    return 0;
}
