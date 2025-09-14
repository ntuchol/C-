#include <iostream>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }

    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }

    double halfPower = power(base, exponent / 2);

    if (exponent % 2 == 0) { // Even exponent
        return halfPower * halfPower;
    } else { 
        return base * halfPower * halfPower;
    }
}

int main() {
    double base = 2.0;
    int exponent = 5;
    double result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl; 

    base = 3.0;
    exponent = -2;
    result = power(base, exponent);
    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl; 
    return 0;
}
