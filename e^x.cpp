#include <iostream>
#include <cmath> 

int main() {
    double value = 1.0;
    double exponential_result = std::exp(value);

    std::cout << "e^" << value << " = " << exponential_result << std::endl;

    value = 0.0;
    exponential_result = std::exp(value);
    std::cout << "e^" << value << " = " << exponential_result << std::endl;

    value = -2.0;
    exponential_result = std::exp(value);
    std::cout << "e^" << value << " = " << exponential_result << std::endl;

    return 0;
}
