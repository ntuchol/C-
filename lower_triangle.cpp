#include <iostream>
#include <vector>

void printLowerTriangular(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    if (rows == 0) return;
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (i < j) {
                std::cout << "0 "; // Elements above the diagonal are zero
            } else {
                std::cout << matrix[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> myMatrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::cout << "Original Matrix:\n";
    for (const auto& row : myMatrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "\nLower Triangular Matrix:\n";
    printLowerTriangular(myMatrix);

    return 0;
}