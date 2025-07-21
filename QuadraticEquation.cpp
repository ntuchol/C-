#include <iostream>
#include <cmath> // For sqrt

int main() {
    double a, b, c;

    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "This is not a quadratic equation (a cannot be 0)." << std::endl;
        // Handle linear case or exit
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        std::cout << "Roots are real and different:" << std::endl;
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        std::cout << "Roots are real and equal:" << std::endl;
        std::cout << "Root = " << root << std::endl;
    } else { // discriminant < 0
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(std::abs(discriminant)) / (2 * a);
        std::cout << "Roots are complex and different:" << std::endl;
        std::cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }

    return 0;
}