#include <iostream>
#include <iomanip> 

double calculatePiLeibniz(int numTerms) {
    double piApproximation = 0.0;
    double sign = 1.0; 
    
    for (int n = 0; n < numTerms; ++n) {
        piApproximation += sign * (1.0 / (2.0 * n + 1.0));
        sign *= -1.0; 
    }

    return piApproximation * 4.0; 
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

    std::cout << std::fixed << std::setprecision(10); 
    std::cout << "Approximation of Pi using " << terms << " terms: " << pi << std::endl;

    return 0;
}
