#include <iostream>
#include <iomanip> // For std::setprecision

double calculatePiLeibniz(int numTerms) {
    double piApproximation = 0.0;
    double sign = 1.0; // To alternate between adding and subtracting

    for (int n = 0; n < numTerms; ++n) {
        piApproximation += sign * (1.0 / (2.0 * n + 1.0));
        sign *= -1.0; // Flip the sign for the next term
    }

    return piApproximation * 4.0; // Multiply by 4 to get Pi
}

int main() {
    int terms;
    std::cout << "Enter the number of terms to sum: ";
    std::cin >> terms;

    if (terms <= 0) {
        std::cout << "Number of terms must be positive." << std::endl;
        return 1;
    }

    double pi = calculatePiLeibniz(terms);

    std::cout << std::fixed << std::setprecision(10); // Set precision for output
    std::cout << "Approximation of Pi using " << terms << " terms: " << pi << std::endl;

    return 0;
}