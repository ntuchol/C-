#include <iostream>

int main() {
    int rows = 8;
    int cols = 8;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if ((i + j) % 2 == 0) {
                std::cout << "* "; 
            } else {
                std::cout << "  "; 
            }
        }
        std::cout << std::endl; 
    }
    return 0;
}
