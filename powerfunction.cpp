double pow(double base, double exponent);
#include <iostream>
#include <cmath> // Required for pow()

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = std::pow(base, exponent); // Calculates 2^3

    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;

    // Example with a negative exponent
    double negative_exponent_result = std::pow(5.0, -2.0); // Calculates 5^-2 (1/25)
    std::cout << "5 raised to the power of -2 is: " << negative_exponent_result << std::endl;

    return 0;
}