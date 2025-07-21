#include <iostream>

// Recursive function to compute the binomial coefficient C(n, k)
long long binomialCoefficient(int n, int k) {
    // Base cases
    if (k == 0 || k == n) {
        return 1;
    }
    // If k is greater than n, it's an invalid combination
    if (k > n) {
        return 0; // Or handle as an error
    }
    // Recursive step
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n_val, k_val;

    std::cout << "Enter n: ";
    std::cin >> n_val;
    std::cout << "Enter k: ";
    std::cin >> k_val;

    // Input validation
    if (k_val < 0 || k_val > n_val) {
        std::cerr << "Invalid input: k must be between 0 and n (inclusive)." << std::endl;
        return 1; // Indicate an error
    }

    long long result = binomialCoefficient(n_val, k_val);
    std::cout << "C(" << n_val << ", " << k_val << ") = " << result << std::endl;

    return 0;
}