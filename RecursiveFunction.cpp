#include <iostream>

long long binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    if (k > n) {
        return 0; 
    }
    return binomialCoefficient(n - 1, k - 1) + binomialCoefficient(n - 1, k);
}

int main() {
    int n_val, k_val;

    std::cout << "Enter n: ";
    std::cin >> n_val;
    std::cout << "Enter k: ";
    std::cin >> k_val;

    if (k_val < 0 || k_val > n_val) {
        std::cerr << "Invalid input: k must be between 0 and n (inclusive)." << std::endl;
        return 1; 
    }

    long long result = binomialCoefficient(n_val, k_val);
    std::cout << "C(" << n_val << ", " << k_val << ") = " << result << std::endl;

    return 0;
}
