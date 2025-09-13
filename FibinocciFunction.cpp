#include <iostream>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
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

    std::cout << "\nTesting individual Fibonacci numbers:" << std::endl;
    std::cout << "fibonacci(0) = " << fibonacci(0) << std::endl; 
    std::cout << "fibonacci(1) = " << fibonacci(1) << std::endl; 
    std::cout << "fibonacci(5) = " << fibonacci(5) << std::endl; 
    std::cout << "fibonacci(10) = " << fibonacci(10) << std::endl; 

    return 0;
}
