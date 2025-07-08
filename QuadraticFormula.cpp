#include <iostream>
#include <cmath> // For sqrt() function

int main() {
    double a, b, c;

    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different: " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Roots are real and same: " << root << std::endl;
    } else { // discriminant < 0
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(std::abs(discriminant)) / (2 * a);
        std::cout << "Roots are complex and different: " << realPart << " + i" << imaginaryPart
                  << " and " << realPart << " - i" << imaginaryPart << std::endl;
    }

    return 0;
}