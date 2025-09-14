#include <iostream>
#include <cmath> 

double stirlingFactorialApproximation(int n) {
    if (n < 0) {
        return 0.0; 
    }
    if (n == 0 || n == 1) {
        return 1.0; // 0! = 1, 1! = 1
    }

    double result = sqrt(2 * M_PI * n) * pow((n / M_E), n);
    return result;
}

int main() {
    int num = 10;
    double approx_factorial = stirlingFactorialApproximation(num);
    std::cout << "Stirling's approximation for " << num << "! is: " << approx_factorial << std::endl;

    return 0;
}
