#include <iostream>
#include <vector>
#include <cmath>

int main() {
    const int limit = 1000;
    std::vector<bool> isPrime(limit + 1, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= limit; ++p) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    std::cout << "Prime numbers less than 1000:" << std::endl;
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i]) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
} 