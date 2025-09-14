#include <numeric> 
class Rational {
private:
    int numerator;
    int denominator;

    void simplify() {
        if (denominator == 0) {
            return; 
        }
        if (numerator == 0) {
            denominator = 1; 
            return;
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
    Rational(int n = 0, int d = 1) : numerator(n), denominator(d) {
        simplify();
    }

    Rational operator+(const Rational& other) const {
        int new_n = (numerator * other.denominator) + (other.numerator * denominator);
        int new_d = denominator * other.denominator;
        return Rational(new_n, new_d);
    }

    bool operator==(const Rational& other) const {
        return (numerator == other.numerator) && (denominator == other.denominator);
    }

    void print() const {
    }
};
