double pow(double base, double exponent);
#include <iostream>
#include <cmath> 

int main() {
    double base = 2.0;
    double exponent = 3.0;
    double result = std::pow(base, exponent);

    std::cout << base << " raised to the power of " << exponent << " is: " << result << std::endl;

    double negative_exponent_result = std::pow(5.0, -2.0); 
    std::cout << "5 raised to the power of -2 is: " << negative_exponent_result << std::endl;

    return 0;
}
