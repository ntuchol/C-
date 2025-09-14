#include <numeric> 
class Rational {
private:
    int numerator;
    int denominator;

    void reduce() {
        if (denominator == 0) {
            throw std::runtime_error("Denominator cannot be zero.");
        }
        int common_divisor = std::gcd(numerator, denominator);
        numerator /= common_divisor;
        denominator /= common_divisor;
        if (denominator < 0) {
            numerator *= -1;
            denominator *= -1;
        }
    }

public:
    Rational(int num = 0, int den = 1) : numerator(num), denominator(den) {
        reduce();
    }

    Rational operator+(const Rational& other) const {
        int new_num = (numerator * other.denominator) + (other.numerator * denominator);
        int new_den = denominator * other.denominator;
        return Rational(new_num, new_den); 
    }

    void print() const {
        std::cout << numerator << "/" << denominator << std::endl;
    }

    // ... other operators and functions
};
