#include <iostream>
#include <cmath> // For sqrt()

void findPythagoreanTriples(int limit) {
    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) { // Start b from a to avoid duplicates
            double c_squared = static_cast<double>(a * a + b * b);
            double c = std::sqrt(c_squared);

            // Check if c is an integer
            if (c == static_cast<int>(c)) {
                std::cout << "(" << a << ", " << b << ", " << static_cast<int>(c) << ")\n";
            }
        }
    }
}

int main() {
    int limit = 20; // Find triples where a, b, or c are up to 20
    findPythagoreanTriples(limit);
    return 0;
}