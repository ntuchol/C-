#include <iostream>
#include <numeric> // For std::gcd in C++17

class Fraction {
private:
    int numerator;
    int denominator;

    // Helper function to simplify the fraction
    void simplify() {
        if (denominator == 0) {
            // Handle error: division by zero
            // For simplicity, setting to 0/1 here, but a more robust solution might throw an exception
            numerator = 0;
            denominator = 1;
            return;
        }
        int common_divisor = std::gcd(numerator, denominator);
        numerator /= common_divisor;
        denominator /= common_divisor;

        // Ensure denominator is positive
        if (denominator < 0) {
            numerator *= -1;
            denominator *= -1;
        }
    }

public:
    // Constructor
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        simplify(); // Simplify upon construction
    }

    // Overload addition operator
    Fraction operator+(const Fraction& other) const {
        int new_num = (numerator * other.denominator) + (other.numerator * denominator);
        int new_den = denominator * other.denominator;
        return Fraction(new_num, new_den);
    }

    // Overload output stream operator
    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        if (f.denominator == 1) {
            os << f.numerator;
        } else {
            os << f.numerator << "/" << f.denominator;
        }
        return os;
    }

    // ... other operators (subtraction, multiplication, division, comparison)
    // ... input stream operator (operator>>)
};

// Example Usage:
int main() {
    Fraction f1(1, 2); // Represents 1/2
    Fraction f2(3, 4); // Represents 3/4

    Fraction sum = f1 + f2; // Adds 1/2 + 3/4
    std::cout << "Sum: " << sum << std::endl; // Output: Sum: 5/4

    return 0;
}