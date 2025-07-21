#include <iostream>

// Recursive function to calculate log base 2 of a number
int log2_recursive(int n) {
    // Base case: if n is 1, log2(1) is 0
    if (n == 1) {
        return 0;
    } 
    // Base case: if n is less than 1 (or 0), it's an invalid input for this simple log2
    else if (n <= 0) {
        return -1; // Indicate an error or invalid input
    }
    // Recursive step: log2(n) = 1 + log2(n/2)
    else {
        return 1 + log2_recursive(n / 2);
    }
}

int main() {
    int number = 8;
    int result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") = " << result << std::endl; // Output: log2(8) = 3
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    number = 16;
    result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") = " << result << std::endl; // Output: log2(16) = 4
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    number = 7; // Non-power of 2
    result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") (approx) = " << result << std::endl; // Output: log2(7) (approx) = 2 (integer division truncates)
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    return 0;
}