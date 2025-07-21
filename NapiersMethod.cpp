#include <iostream>
#include <vector>
#include <cmath> // For modern log calculations, not strictly Napier's original method

int main() {
    // Napier's approach involved a large 'radius' or 'total sine'
    // Let's use a similar large number for illustration
    double R = 10000000.0; 

    // Geometric progression with a common ratio close to 1
    double ratio = 1 - 1.0 / R; // (1 - 1/R) is used in historical accounts
    
    // Number of terms to generate
    int num_terms = 20;

    std::vector<double> geometric_sequence(num_terms);
    std::vector<double> arithmetic_sequence(num_terms);

    // Initial values
    geometric_sequence[0] = R;
    arithmetic_sequence[0] = 0.0; // In Napier's table, log(R) was 0

    // Generating the sequences
    for (int i = 1; i < num_terms; ++i) {
        geometric_sequence[i] = geometric_sequence[i - 1] * ratio;
        // In Napier's concept, arithmetic progression corresponds to distance traveled by L
        // This is a simplified representation of how Napier generated his tables based on
        // the idea that equal ratios in geometric progression correspond to equal differences in arithmetic progression
        // The actual value would depend on the chosen initial speed for L and time interval
        arithmetic_sequence[i] = arithmetic_sequence[i - 1] + (R / R); // Arbitrary increment for illustrative purposes
    }

    // Display the sequences
    std::cout << "Geometric Sequence (Napier's 'Sines'):" << std::endl;
    for (double val : geometric_sequence) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    std::cout << "Arithmetic Sequence (Napier's 'Logarithms'):" << std::endl;
    for (double val : arithmetic_sequence) {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    return 0;
}