#include <iostream>

// Recursive implementation of the Ackermann function
unsigned long long ackermann(unsigned int m, unsigned int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    // Example usage
    std::cout << "A(0, 0) = " << ackermann(0, 0) << std::endl; // Expected: 1
    std::cout << "A(1, 1) = " << ackermann(1, 1) << std::endl; // Expected: 3
    std::cout << "A(2, 2) = " << ackermann(2, 2) << std::endl; // Expected: 7
    std::cout << "A(3, 2) = " << ackermann(3, 2) << std::endl; // Expected: 29
    // Note: For larger values of m and n, the function grows extremely fast,
    // potentially leading to stack overflow or exceeding integer limits.
    // std::cout << "A(4, 1) = " << ackermann(4, 1) << std::endl; // Will likely cause issues
    return 0;
}