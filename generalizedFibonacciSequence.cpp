#include <iostream>

// Function to generate a generalized Fibonacci sequence
void generateGeneralizedFibonacci(int a, int b, int n) {
    if (n <= 0) {
        return; // Or handle the case as needed
    }

    std::cout << a << " "; // Print the first term
    if (n == 1) {
        return;
    }

    std::cout << b << " "; // Print the second term
    if (n == 2) {
        return;
    }
    int term1 = a;
    int term2 = b;
    for (int i = 3; i <= n; ++i) {
        int nextTerm = term1 + term2;
        std::cout << nextTerm << " ";
        term1 = term2;
        term2 = nextTerm;
    }
    std::cout << std::endl;
}

int main() {
    // Example usage: Generate a Fibonacci sequence starting with 0 and 1
    std::cout << "Standard Fibonacci Sequence (0, 1): ";
    generateGeneralizedFibonacci(0, 1, 10);

    // Example with different starting values
    std::cout << "Generalized Fibonacci Sequence (3, 5): ";
    generateGeneralizedFibonacci(3, 5, 8);

    return 0;
}