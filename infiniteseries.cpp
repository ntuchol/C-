#include <iostream>
#include <iomanip> 
int main() {
    double pi_approximation = 0.0;
    long long num_terms = 1000000; 
    for (long long i = 0; i < num_terms; ++i) {
        double denominator = 1.0 + (2.0 * i);

        if (i % 2 == 0) {
            pi_approximation += (4.0 / denominator);
        } else {
            pi_approximation -= (4.0 / denominator);
        }
    }

    std::cout << "Approximated value of Pi after " << num_terms << " terms: ";
    std::cout << std::fixed << std::setprecision(10) << pi_approximation << std::endl;

    return 0;
}
