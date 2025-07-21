#include <iostream>
#include <vector>

int main() {
    int numRows = 10;

    std::cout << "Pascal's Triangle (First " << numRows << " Rows):\n";

    // Vector of vectors to store the triangle
    std::vector<std::vector<int>> triangle;

    for (int i = 0; i < numRows; ++i) {
        // Create a new row
        std::vector<int> currentRow(i + 1);

        // First and last elements of each row are always 1
        currentRow[0] = 1;
        if (i > 0) {
            currentRow[i] = 1;
        }

        // Calculate the intermediate elements
        for (int j = 1; j < i; ++j) {
            currentRow[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }

        // Add the current row to the triangle
        triangle.push_back(currentRow);
    }

    // Print the triangle
    for (int i = 0; i < numRows; ++i) {
        // Add spacing for alignment
        for (int k = 0; k < numRows - 1 - i; ++k) {
            std::cout << "  ";
        }
        for (int j = 0; j <= i; ++j) {
            std::cout << triangle[i][j] << "   "; // Print element with spacing
        }
        std::cout << std::endl; // New line after each row
    }

    return 0;
}