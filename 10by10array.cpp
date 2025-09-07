#include <iostream>
#include <vector>
#include <random>
#include <string>

int main() {
    const int ROWS = 10;
    const int COLS = 10;

    std::random_device rd; 
    std::mt19937 gen(rd()); 

    std::uniform_int_distribution<> distrib('a', 'z');

    std::vector<std::vector<char>> letterArray(ROWS, std::vector<char>(COLS));

     for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            letterArray[i][j] = static_cast<char>(distrib(gen));
        }
    }

    std::cout << "Generated 10x10 array of random letters:\n";
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << letterArray[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
