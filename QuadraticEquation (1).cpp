#include <iostream>
#include <cmath> // For sqrt()

double a, b, c;
    std::cout << "Enter coefficients a, b, and c: ";
    std::cin >> a >> b >> c;

double discriminant = b * b - 4 * a * c;

if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            std::cout << "Roots are real and different." << std::endl;
            std::cout << "Root 1 = " << root1 << std::endl;
            std::cout << "Root 2 = " << root2 << std::endl;
        }
 else if (discriminant == 0) {
            double root = -b / (2 * a);
            std::cout << "Roots are real and same." << std::endl;
            std::cout << "Root = " << root << std::endl;
        }

