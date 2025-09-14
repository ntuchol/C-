#include <iostream>
#include <vector>
#include <cmath> 

void sieveOfEratosthenes(int n) {
    std::vector<bool> isPrime(n + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

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
