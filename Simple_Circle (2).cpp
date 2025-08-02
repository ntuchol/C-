#include <iostream> // Include necessary header for input/output stream
#include <cmath>    // Include necessary header for mathematical functions

// Define the value of PI as a constant
const double PI = 3.14159265358979323846; 

class Circle {
private:
    double radius; // Private member to store the radius

public:
    // Constructor to initialize the Circle object with a radius
    Circle(double rad) : radius(rad) {
        if (radius < 0) {
            std::cout << "Warning: Radius cannot be negative. Setting to 0." << std::endl;
            radius = 0;
        }
    }

    // Member function to set the radius
    void setRadius(double rad) {
        if (rad < 0) {
            std::cout << "Warning: Radius cannot be negative. Not changing radius." << std::endl;
        } else {
            radius = rad;
        }
    }

    // Member function to get the radius
    double getRadius() const {
        return radius;
    }

    // Member function to calculate the area of the circle
    double calculateArea() const {
        return PI * pow(radius, 2); // Formula to calculate the area of a circle
    }

    // Member function to calculate the circumference of the circle
    double calculateCircumference() const {
        return 2 * PI * radius; // Formula to calculate the circumference of a circle
    }

    // Member function to display circle data
    void showData() const {
        std::cout << "Circle Details:" << std::endl;
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Circumference: " << calculateCircumference() << std::endl;
    }
};

int main() {
    // Create a circle object
    double inputRadius;
    std::cout << "Input the radius of the circle: ";
    std::cin >> inputRadius;

    Circle myCircle(inputRadius); // Create a Circle object with the given radius

    myCircle.showData(); // Display the circle's data

    // Example of changing the radius and displaying again
    std::cout << "\nEnter a new radius: ";
    std::cin >> inputRadius;
    myCircle.setRadius(inputRadius);
    myCircle.showData();

    return 0; // Return 0 to indicate successful completion
}