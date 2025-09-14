#include <iostream>
#include <cmath> 
int main() {
    double side1 = 3.0;
    double side2 = 4.0;

    double hypotenuse = std::hypot(side1, side2);

    std::cout << "The hypotenuse of a right triangle with sides " 
              << side1 << " and " << side2 << " is: " 
              << hypotenuse << std::endl;

    return 0;
}
