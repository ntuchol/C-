#include <iostream>

// Recursive function to calculate the sum of the first n natural numbers
int sumNaturalNumbers(int n) {
    // Base case: If n is 0 or less, the sum is 0
    if (n <= 0) { 
        return 0;
    }
    // Recursive case: Return n + the sum of the first (n-1) numbers
    else { 
        return n + sumNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int sum = sumNaturalNumbers(n);
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }

    return 0;
}