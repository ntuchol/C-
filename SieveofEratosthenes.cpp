#include <iostream>
#include <vector>
#include <cmath> // For sqrt

void sieveOfEratosthenes(int n) {
    // Create a boolean array "isPrime[0..n]" and initialize all entries it as true.
    // A value in isPrime[i] will finally be false if i is Not a prime, else true.
    std::vector<bool> isPrime(n + 1, true);

    // 0 and 1 are not prime numbers
    isPrime[0] = false;
    isPrime[1] = false;

    // Start checking from p = 2
    for (int p = 2; p * p <= n; ++p) {
        // If isPrime[p] is still true, then it is a prime
        if (isPrime[p]) {
            // Mark all multiples of p as false (composite)
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    // Print all prime numbers
    std::cout << "Prime numbers up to " << n << " are: " << std::endl;
    for (int p = 2; p <= n; ++p) {
        if (isPrime[p])
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