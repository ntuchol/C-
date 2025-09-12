#include <iostream>
#include <numeric> 
class Fraction {
private:
    int numerator;
    int denominator;

    void simplify() {
        if (denominator == 0) {
            numerator = 0;
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
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        simplify(); 
    }

    Fraction operator+(const Fraction& other) const {
        int new_num = (numerator * other.denominator) + (other.numerator * denominator);
        int new_den = denominator * other.denominator;
        return Fraction(new_num, new_den);
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& f) {
        if (f.denominator == 1) {
            os << f.numerator;
        } else {
            os << f.numerator << "/" << f.denominator;
        }
        return os;
    }

};

int main() {
    Fraction f1(1, 2); 
    Fraction f2(3, 4);

    Fraction sum = f1 + f2; 
    std::cout << "Sum: " << sum << std::endl; 
    return 0;
}
