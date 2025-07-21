#include <iostream>

    // Assuming a Rational class is defined elsewhere
    // class Rational { ... };

    int main() {
        Rational r1(1, 2); // Represents 1/2
        Rational r2(3, 4); // Represents 3/4
        Rational sum = r1 + r2; // Adds the fractions
        std::cout << "Sum: " << sum << std::endl; // Prints the sum (e.g., 5/4)

        if (r1 < r2) {
            std::cout << "r1 is less than r2" << std::endl;
        }
        return 0;
    }