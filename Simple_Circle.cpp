#include <iostream> 
#include <cmath>    

const double PI = 3.14159265358979323846; 

class Circle {
private:
    double radius; 

public:
    Circle(double rad) : radius(rad) {
        if (radius < 0) {
            std::cout << "Warning: Radius cannot be negative. Setting to 0." << std::endl;
            radius = 0;
        }
    }

    void setRadius(double rad) {
        if (rad < 0) {
            std::cout << "Warning: Radius cannot be negative. Not changing radius." << std::endl;
        } else {
            radius = rad;
        }
    }

    double getRadius() const {
        return radius;
    }

    double calculateArea() const {
        return PI * pow(radius, 2); 
    }

    double calculateCircumference() const {
        return 2 * PI * radius; 
    }

    void showData() const {
        std::cout << "Circle Details:" << std::endl;
        std::cout << "Radius: " << radius << std::endl;
        std::cout << "Area: " << calculateArea() << std::endl;
        std::cout << "Circumference: " << calculateCircumference() << std::endl;
    }
};

int main() {
    double inputRadius;
    std::cout << "Input the radius of the circle: ";
    std::cin >> inputRadius;

    Circle myCircle(inputRadius); 
    myCircle.showData(); 
    std::cout << "\nEnter a new radius: ";
    std::cin >> inputRadius;
    myCircle.setRadius(inputRadius);
    myCircle.showData();

    return 0; 
}
