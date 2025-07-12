#include <iostream>
#include <cmath> // Required for sqrt()

bool isPrime(int n) {
    // Handle base cases:
    // Numbers less than or equal to 1 are not prime.
    if (n <= 1) {
        return false;
    }
    // 2 and 3 are prime numbers.
    if (n <= 3) {
        return true;
    }
    // Check for divisibility by 2 and 3.
    // If divisible, it's not prime (except for 2 and 3 themselves, which are handled above).
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    // Check for divisibility by numbers of the form 6k ± 1.
    // This optimization skips multiples of 2 and 3.
    // We only need to check up to the square root of n.
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    // If no divisors are found, the number is prime.
    return true;
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