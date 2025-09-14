#include <iostream>
#include <vector>
#include <cmath>

void sieveOfEratosthenes(int limit) {
    std::vector<bool> isPrime(limit + 1, true);

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p] == true) {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

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
