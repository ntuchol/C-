#include <iostream>
#include <cmath> // For sqrt()

bool isPrime(int n) {
    if (n <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, so it's prime
}

int main() {
    int num = 29;
    if (isPrime(num)) {
        std::cout << num << " is a prime number." << std::endl;
    } else {
        std::cout << num << " is not a prime number." << std::endl;
    }
    return 0;
}