#include <iostream>
#include <cmath>
    const double PI = 3.141592653589793; // Define PI if M_PI is not available
    double angle_degrees = 90.0;
    double angle_radians = angle_degrees * (PI / 180.0);
    double sine_value = sin(angle_radians);
    

int main() {
    // Define PI if M_PI is not available in your compiler's cmath
    #ifndef M_PI
    const double M_PI = 3.14159265358979323846;
    #endif

    double angle_degrees = 45.0;
    double angle_radians = angle_degrees * (M_PI / 180.0);

    double sine_value = sin(angle_radians);

    std::cout << "The sine of " << angle_degrees << " degrees ("
              << angle_radians << " radians) is: " << sine_value << std::endl;

    return 0;
}
