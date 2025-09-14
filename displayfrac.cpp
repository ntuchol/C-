#include <iostream> 
class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num = 0, int den = 1) : numerator(num), denominator(den) {
        if (denominator == 0) {
            std::cerr << "Error: Denominator cannot be zero!" << std::endl;
            this->denominator = 1; 
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const Fraction& frac) {
        os << frac.numerator << "/" << frac.denominator;
        return os;
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(5, 6);
    Fraction f3(7, 1); 
    Fraction f4(10, 0); 
    
    std::cout << "Fraction 1: " << f1 << std::endl;
    std::cout << "Fraction 2: " << f2 << std::endl;
    std::cout << "Fraction 3: " << f3 << std::endl;
    std::cout << "Fraction 4: " << f4 << std::endl; 
    
    return 0;
}
