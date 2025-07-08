#include <iostream>
#include <vector>
#include <cmath>

void sieveOfEratosthenes(int limit) {
    // Create a boolean array "isPrime[0...limit]" and initialize
    // all entries as true. A value in isPrime[p] will finally be
    // false if p is Not a prime, else true.
    std::vector<bool> isPrime(limit + 1, true);

    // Start from 2, as 0 and 1 are not prime numbers.
    for (int p = 2; p * p <= limit; ++p) {
        // If isPrime[p] is still true, then it is a prime number.
        if (isPrime[p] == true) {
            // Mark all multiples of p as not prime.
            // Start from p*p because smaller multiples (like 2*p, 3*p, etc.)
            // would have already been marked by smaller primes.
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    // Print all prime numbers.
    std::cout << "Prime numbers up to " << limit << " are: ";
    for (int p = 2; p <= limit; ++p) {
        if (isPrime[p] == true)
            std::cout << p << " ";
    }
    std::cout << std::endl;
}

int main() {
    int limit;
    std::cout << "Enter the upper limit to find prime numbers: ";
    std::cin >> limit;

    if (limit < 2) {
        std::cout << "There are no prime numbers up to " << limit << std::endl;
    } else {
        sieveOfEratosthenes(limit);
    }

    return 0;
}