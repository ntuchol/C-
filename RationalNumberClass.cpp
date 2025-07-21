#include <numeric> // For std::gcd in C++17

class Rational {
private:
    int numerator;
    int denominator;

    // Helper to reduce the fraction
    void reduce() {
        if (denominator == 0) {
            // Handle division by zero (e.g., throw an exception)
            throw std::runtime_error("Denominator cannot be zero.");
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
    Rational(int num = 0, int den = 1) : numerator(num), denominator(den) {
        reduce();
    }

    // Overload addition operator
    Rational operator+(const Rational& other) const {
        int new_num = (numerator * other.denominator) + (other.numerator * denominator);
        int new_den = denominator * other.denominator;
        return Rational(new_num, new_den); // Constructor handles reduction
    }

    // Example of printing
    void print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }

    // ... other operators and functions
};