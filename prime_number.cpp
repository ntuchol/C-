#include <iostream>
#include <cmath> // For sqrt()

bool isPrime(int num) {
    if (num <= 1) {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2) {
        return true; // 2 is the only even prime number
    }
    if (num % 2 == 0) {
        return false; // Other even numbers are not prime
    }
    // Check for divisibility by odd numbers up to sqrt(num)
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) {
            return false; // Found a divisor, so it's not prime
        }
    }
    return true; // No divisors found, so it's prime
}

int main() {
    int number;
    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> number;

    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }

    return 0;
}