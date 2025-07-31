#include <iostream> // Required for input/output operations

class Fraction {
private:
    int numerator;
    int denominator;

public:
    // Constructor to initialize the fraction
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (denominator == 0) {
            // Handle division by zero, e.g., throw an exception or set an error state
            std::cerr << "Error: Denominator cannot be zero!" << std::endl;
            // For simplicity, setting denominator to 1, but a robust solution would handle this more gracefully.
            this->denominator = 1; 
        }
    }

    // Overload the output stream operator to display the fraction
    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main() {
    // Create Fraction objects
    Fraction f1(3, 4);
    Fraction f2(5, 6);
    Fraction f3(7, 1); // Represents a whole number
    Fraction f4(10, 0); // Example of division by zero

    // Display the fractions
    std::cout << "Fraction 1: " << f1 << std::endl;
    std::cout << "Fraction 2: " << f2 << std::endl;
    std::cout << "Fraction 3: " << f3 << std::endl;
    std::cout << "Fraction 4: " << f4 << std::endl; // This will trigger the error message

    return 0;
}