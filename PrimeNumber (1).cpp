#include <iostream>
#include <cmath> // For sqrt() function

// Function to check if a number is prime
bool isPrime(int n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) {
        return false;
    }
    // 2 is the only even prime number
    if (n == 2) {
        return true;
    }
    // If n is even and greater than 2, it's not prime
    if (n % 2 == 0) {
        return false;
    }
    // Check for divisibility from 3 up to sqrt(n), incrementing by 2 (only odd numbers)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, so it's prime
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }

    return 0;
}