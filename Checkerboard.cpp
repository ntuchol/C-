#include <iostream>

int main() {
    const int rows = 8;
    const int cols = 8;

    for (int i = 0; i < rows; ++i) { // Iterate through rows
        for (int j = 0; j < cols; ++j) { // Iterate through columns
            if ((i + j) % 2 == 0) {
                std::cout << "# "; // Character for "dark" squares
            } else {
                std::cout << ". "; // Character for "light" squares
            }
        }
        std::cout << std::endl; // Move to the next line after each row
    }

    return 0;
}