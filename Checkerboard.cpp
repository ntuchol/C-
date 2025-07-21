#include <iostream>

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "* "; // Print a star for even sum
            } else {
                std::cout << "  "; // Print a space for odd sum
            }
        }
        std::cout << std::endl; // Move to the next line after each row
    }
    return 0;
}