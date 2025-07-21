#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

int main() {
    int n;
    double sum = 0.0;

    // Prompt the user for input
    std::cout << "Enter the number of terms (n) for the harmonic series: ";
    std::cin >> n;

    // Input validation: ensure n is a positive integer
    if (n <= 0) {
        std::cout << "Number of terms must be a positive integer." << std::endl;
        return 1; // Indicate an error
    }

    // Calculate the sum of the harmonic series
    for (int i = 1; i <= n; ++i) {
        sum += 1.0 / i; // Add the reciprocal of 'i' to the sum
    }

    // Display the result
    std::cout << "The sum of the harmonic series up to " << n << " terms is: ";
    std::cout << std::fixed << std::setprecision(6) << sum << std::endl;

    return 0; // Indicate successful execution
}