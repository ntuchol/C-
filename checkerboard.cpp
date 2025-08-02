#include <iostream>

int main() {
    int size = 8; // Size of the checkerboard (e.g., 8x8)

    for (int i = 0; i < size; ++i) { // Loop for rows
        for (int j = 0; j < size; ++j) { // Loop for columns
            // If the sum of row and column indices is even, print one character
            if ((i + j) % 2 == 0) {
                std::cout << "#"; 
            } 
            // Otherwise, print the other character
            else {
                std::cout << ".";
            }
        }
        std::cout << std::endl; // Move to the next line after each row
    }
    return 0;
}