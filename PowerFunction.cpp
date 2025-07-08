#include <iostream>

double power(double base, int exponent) {
    // Base Case
    if (exponent == 0) {
        return 1.0;
    }

    // Handle Negative Exponents
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }

    // Recursive Step with Optimization
    double halfPower = power(base, exponent / 2);

    if (exponent % 2 == 0) { // Even exponent
        return halfPower * halfPower;
    } else { // Odd exponent
        return base * halfPower * halfPower;
    }
}

int main() {
    double base = 2.0;
    int exponent = 5;
    double result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl; // Output: 32

    base = 3.0;
    exponent = -2;
    result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl; // Output: 0.111111

    return 0;
}