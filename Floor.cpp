#include <iostream>
#include <cmath> // Required for floor()

int main() {
    double num1 = 2.7;
    double num2 = -2.7;
    double num3 = 5.0;

    std::cout << "floor(" << num1 << ") = " << std::floor(num1) << std::endl; // Output: 2.0
    std::cout << "floor(" << num2 << ") = " << std::floor(num2) << std::endl; // Output: -3.0
    std::cout << "floor(" << num3 << ") = " << std::floor(num3) << std::endl; // Output: 5.0

    return 0;
}