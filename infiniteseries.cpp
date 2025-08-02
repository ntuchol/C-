#include <iostream>
#include <iomanip> // For std::setprecision

int main() {
    double pi_approximation = 0.0;
    long long num_terms = 1000000; // Number of terms to sum

    for (long long i = 0; i < num_terms; ++i) {
        // Calculate the denominator for the current term
        double denominator = 1.0 + (2.0 * i);

        // Add or subtract the term based on whether 'i' is even or odd
        if (i % 2 == 0) {
            pi_approximation += (4.0 / denominator);
        } else {
            pi_approximation -= (4.0 / denominator);
        }
    }

    // Output the approximated value of pi
    std::cout << "Approximated value of Pi after " << num_terms << " terms: ";
    std::cout << std::fixed << std::setprecision(10) << pi_approximation << std::endl;

    return 0;
}
