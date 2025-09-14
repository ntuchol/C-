#include <iostream>
#include <cmath> 

long long factorial(int n) {
    long long res = 1;
    for (int i = 2; i <= n; ++i) {
        res *= i;
    }
    return res;
}

double exp_taylor(double x, int num_terms) {
    double sum = 0.0;
    for (int n = 0; n < num_terms; ++n) {
        sum += std::pow(x, n) / factorial(n);
    }
    return sum;
}

int main() {
    double x_val = 1.0;
    int terms = 10; 
    double result = exp_taylor(x_val, terms);
    std::cout << "Approximation of e^" << x_val << " using " << terms << " terms: " << result << std::endl;
    std::cout << "Actual value of e^" << x_val << ": " << std::exp(x_val) << std::endl;

    return 0;
}
