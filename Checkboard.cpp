#include <iostream>

int main() {
    int size = 8; // Size of the checkerboard (e.g., 8x8)

    for (int i = 0; i < size; ++i) { // Iterate through rows
        for (int j = 0; j < size; ++j) { // Iterate through columns
            // Check if the sum of row and column indices is even or odd
            if ((i + j) % 2 == 0) {
                std::cout << "* "; // Print star for "white" squares
            } else {
                std::cout << "  "; // Print two spaces for "black" squares (for better visual spacing)
            }
        }
        std::cout << std::endl; // Move to the next line after each row
    }
    return 0;
}
