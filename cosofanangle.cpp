#include <iostream>
#include <cmath> // Required for cos() and M_PI (if available)

int main() {
    // Calculate cosine of an angle in radians
    double angle_radians = 0.785398; // Approximately 45 degrees
    double result_radians = std::cos(angle_radians);
    std::cout << "Cosine of " << angle_radians << " radians: " << result_radians << std::endl;

    // Calculate cosine of an angle in degrees (after converting to radians)
    double angle_degrees = 45.0;
    // Define M_PI if not available in cmath (some compilers might not include it by default)
    const double PI = 3.14159265358979323846; 
    double angle_in_radians = angle_degrees * (PI / 180.0);
    double result_degrees = std::cos(angle_in_radians);
    std::cout << "Cosine of " << angle_degrees << " degrees: " << result_degrees << std::endl;

    return 0;
}