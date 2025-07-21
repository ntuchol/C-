#include <vector>
#include <numeric> // For std::gcd
#include <algorithm> // For std::sort

// ... (Fraction struct as defined above)

// Function to generate Farey sequence
std::vector<Fraction> generateFareySequence(int n) {
    std::vector<Fraction> farey_sequence;

    // Add 0/1 and 1/1
    farey_sequence.push_back({0, 1});
    if (n >= 1) { // 1/1 is only valid if n >= 1
        farey_sequence.push_back({1, 1});
    }

    // Iterate through possible denominators and numerators
    for (int b = 2; b <= n; ++b) {
        for (int a = 1; a < b; ++a) { // Numerator < Denominator for fractions between 0 and 1
            if (std::gcd(a, b) == 1) { // Check if in lowest terms
                farey_sequence.push_back({a, b});
            }
        }
    }

    // Sort the fractions
    std::sort(farey_sequence.begin(), farey_sequence.end(), [](const Fraction& f1, const Fraction& f2) {
        return static_cast<double>(f1.num) / f1.den < static_cast<double>(f2.num) / f2.den;
    });

    return farey_sequence;
}