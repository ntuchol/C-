#include <iostream>

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: F(0) = 0, F(1) = 1
    if (n <= 1) {
        return n;
    }
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num_terms;

    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> num_terms;

    if (num_terms < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        std::cout << "Fibonacci Series (first " << num_terms << " terms): ";
        for (int i = 0; i < num_terms; ++i) {
            std::cout << fibonacci(i);
            if (i < num_terms - 1) {
                std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }

    // Test cases for individual Fibonacci numbers
    std::cout << "\nTesting individual Fibonacci numbers:" << std::endl;
    std::cout << "fibonacci(0) = " << fibonacci(0) << std::endl; // Expected: 0
    std::cout << "fibonacci(1) = " << fibonacci(1) << std::endl; // Expected: 1
    std::cout << "fibonacci(5) = " << fibonacci(5) << std::endl; // Expected: 5
    std::cout << "fibonacci(10) = " << fibonacci(10) << std::endl; // Expected: 55

    return 0;
}