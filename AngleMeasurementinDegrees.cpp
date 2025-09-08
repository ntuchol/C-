#include <iostream>
#include <cmath> 
int main() {
    double angle_degrees = 45.0;

    double angle_radians = angle_degrees * (M_PI / 180.0);

    double sine_value = std::sin(angle_radians);
    double cosine_value = std::cos(angle_radians);

    std::cout << "Angle in degrees: " << angle_degrees << std::endl;
    std::cout << "Angle in radians: " << angle_radians << std::endl;
    std::cout << "Sine of " << angle_degrees << " degrees: " << sine_value << std::endl;
    std::cout << "Cosine of " << angle_degrees << " degrees: " << cosine_value << std::endl;

    double some_radians = 1.0; 
    double converted_degrees = some_radians * (180.0 / M_PI);
    std::cout << "1 radian in degrees: " << converted_degrees << std::endl;

    return 0;
}
