#include <iostream>
#include <vector>
#include <random>
#include <string>

int main() {
    const int ROWS = 10;
    const int COLS = 10;

    // Use std::mt19937 as a high-quality pseudo-random number generator
    std::random_device rd; // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator

    // Define a distribution for characters 'a' to 'z' (lowercase)
    // You can adjust this range for uppercase or other characters
    std::uniform_int_distribution<> distrib('a', 'z');

    // Declare a 2D vector to store the characters
    std::vector<std::vector<char>> letterArray(ROWS, std::vector<char>(COLS));

    // Fill the array with random letters
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            letterArray[i][j] = static_cast<char>(distrib(gen));
        }
    }

    // Print the array
    std::cout << "Generated 10x10 array of random letters:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << letterArray[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}