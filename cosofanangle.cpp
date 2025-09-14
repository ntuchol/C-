#include <iostream>
#include <cmath> 
int main() {
    double angle_radians = 0.785398; 
    double result_radians = std::cos(angle_radians);
    std::cout << "Cosine of " << angle_radians << " radians: " << result_radians << std::endl;

    double angle_degrees = 45.0;
    const double PI = 3.14159265358979323846; 
    double angle_in_radians = angle_degrees * (PI / 180.0);
    double result_degrees = std::cos(angle_in_radians);
    std::cout << "Cosine of " << angle_degrees << " degrees: " << result_degrees << std::endl;

    return 0;
}
