#include <iostream>

    long long power(long long base, int exp) {
        if (exp == 0) {
            return 1;
        }
        long long res = power(base, exp / 2);
        if (exp % 2 == 0) {
            return res * res;
        } else {
            return base * res * res;
        }
    }

    int main() {
        long long base = 2;
        int exponent = 10;
        long long result = power(base, exponent); 
        std::cout << "Result: " << result << std::endl;
        return 0;
    }
