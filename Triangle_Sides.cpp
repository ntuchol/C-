double side1, side2, side3;
#include <iostream>

    // ... inside main() or a function
    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;
    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;
    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
            // It's a valid triangle
        } else {
            // It's not a valid triangle
        }
        if (side1 == side2 && side2 == side3) {
            // Equilateral
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            // Isosceles
        } else {
            // Scalene
        }
        #include <cmath> // For pow() or sqrt()

        // Assuming side3 is potentially the hypotenuse
        if (pow(side1, 2) + pow(side2, 2) == pow(side3, 2)) {
            // Right-angled triangle
        }
        // You might need to check all permutations if you don't know which is the longest side.
        // Or, find the longest side first and then apply the theorem.
      std::cout << "The triangle is a right-angled triangle." << std::endl;


