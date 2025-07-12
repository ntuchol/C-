#include <numeric> // For std::gcd

class Rational {
private:
    int numerator;
    int denominator;

    void reduce(); // Helper to reduce the fraction

public:
    // Constructor
    Rational(int num = 0, int den = 1);

    // Arithmetic operators
    Rational operator+(const Rational& other) const;
    Rational operator-(const Rational& other) const;
    Rational operator*(const Rational& other) const;
    Rational operator/(const Rational& other) const;

    // Compound assignment operators
    Rational& operator+=(const Rational& other);
    Rational& operator-=(const Rational& other);
    Rational& operator*=(const Rational& other);
    Rational& operator/=(const Rational& other);

    // Comparison operators
    bool operator==(const Rational& other) const;
    bool operator!=(const Rational& other) const;
    // ... other comparison operators

    // Output operator
    friend std::ostream& operator<<(std::ostream& os, const Rational& r);
};