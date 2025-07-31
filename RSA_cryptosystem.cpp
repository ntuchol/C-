#include <iostream>
#include <numeric> // For std::gcd

// Function to compute base^expo mod m
long long power(long long base, long long expo, long long m) {
    long long res = 1;
    base %= m;
    while (expo > 0) {
        if (expo % 2 == 1) res = (res * base) % m;
        base = (base * base) % m;
        expo /= 2;
    }
    return res;
}

// Function to find modular inverse of e modulo phi
long long modInverse(long long e, long long phi) {
    for (long long d = 2; d < phi; d++) {
        if ((e * d) % phi == 1) return d;
    }
    return -1; // Should not happen with valid e and phi
}

int main() {
    // Simplified example with small primes
    long long p = 7;
    long long q = 11;

    long long n = p * q;
    long long phi = (p - 1) * (q - 1);

    long long e = 0;
    for (e = 2; e < phi; e++) {
        if (std::gcd(e, phi) == 1) break;
    }

    long long d = modInverse(e, phi);

    std::cout << "Public Key (e, n): (" << e << ", " << n << ")\n";
    std::cout << "Private Key (d, n): (" << d << ", " << n << ")\n";

    long long message = 5; // Example message
    std::cout << "Original Message: " << message << "\n";

    long long encrypted_message = power(message, e, n);
    std::cout << "Encrypted Message: " << encrypted_message << "\n";

    long long decrypted_message = power(encrypted_message, d, n);
    std::cout << "Decrypted Message: " << decrypted_message << "\n";

    return 0;
}