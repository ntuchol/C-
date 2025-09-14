#include <iostream>
#include <cmath> 
#include <numbers> 

double stirlingApproximation(int n) {
    if (n < 0) {
        return 0;
    }
    if (n == 0 || n == 1) {
        return 1; // 0! = 1, 1! = 1
    }

    const double PI = std::numbers::pi; 
    const double E = std::exp(1.0); // Euler's number

    return std::sqrt(2 * PI * n) * std::pow((n / E), n);
}

int main() {
    int num = 10;
    double approximated_factorial = stirlingApproximation(num);
    std::cout << "Approximated " << num << "! using Stirling's Formula: " << approximated_factorial << std::endl;

    return 0;
}
