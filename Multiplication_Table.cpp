#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    std::cout << "Multiplication table for " << n << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << n << " * " << i << " = " << n * i << std::endl;
    }
    return 0;
}