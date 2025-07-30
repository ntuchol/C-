#include <numeric> // For std::gcd in C++17

class Rational {
private:
    int numerator;
    int denominator;

    void simplify() {
        if (denominator == 0) {
            // Handle error: division by zero
            // For example, throw an exception or set to an invalid state
            return; 
        }
        if (numerator == 0) {
            denominator = 1; // Represent 0 as 0/1
            return;
        }
        int common_divisor = std::gcd(numerator, denominator);
        numerator /= common_divisor;
        denominator /= common_divisor;
        if (denominator < 0) { // Ensure denominator is positive
            numerator *= -1;
            denominator *= -1;
        }
    }

public:
    Rational(int n = 0, int d = 1) : numerator(n), denominator(d) {
        simplify();
    }

    // Overload arithmetic operators
    Rational operator+(const Rational& other) const {
        int new_n = (numerator * other.denominator) + (other.numerator * denominator);
        int new_d = denominator * other.denominator;
        return Rational(new_n, new_d);
    }

    // Overload comparison operators
    bool operator==(const Rational& other) const {
        return (numerator == other.numerator) && (denominator == other.denominator);
    }

    // Output function
    void print() const {
        // Output in a/b format
    }
};