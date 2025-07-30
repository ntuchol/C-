#include <iostream>
#include <cmath> // For sqrt, pow, M_PI, M_E

// Function to approximate factorial using Stirling's formula
double stirlingFactorialApproximation(int n) {
    if (n < 0) {
        // Factorial is not defined for negative numbers
        return 0.0; // Or throw an exception
    }
    if (n == 0 || n == 1) {
        return 1.0; // 0! = 1, 1! = 1
    }

    // Using the formula: sqrt(2 * PI * n) * (n / e)^n
    double result = sqrt(2 * M_PI * n) * pow((n / M_E), n);
    return result;
}

int main() {
    int num = 10;
    double approx_factorial = stirlingFactorialApproximation(num);
    std::cout << "Stirling's approximation for " << num << "! is: " << approx_factorial << std::endl;

    // For comparison, actual 10! is 3,628,800
    return 0;
}