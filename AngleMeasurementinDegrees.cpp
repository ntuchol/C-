#include <iostream>
#include <cmath> // For M_PI and trigonometric functions

int main() {
    double angle_degrees = 45.0;

    // Convert degrees to radians for trigonometric functions
    double angle_radians = angle_degrees * (M_PI / 180.0);

    // Calculate sine and cosine using radians
    double sine_value = std::sin(angle_radians);
    double cosine_value = std::cos(angle_radians);

    std::cout << "Angle in degrees: " << angle_degrees << std::endl;
    std::cout << "Angle in radians: " << angle_radians << std::endl;
    std::cout << "Sine of " << angle_degrees << " degrees: " << sine_value << std::endl;
    std::cout << "Cosine of " << angle_degrees << " degrees: " << cosine_value << std::endl;

    // Convert a radian value back to degrees
    double some_radians = 1.0; // Example radian value
    double converted_degrees = some_radians * (180.0 / M_PI);
    std::cout << "1 radian in degrees: " << converted_degrees << std::endl;

    return 0;
}