#include <iostream>
#include <cmath> // For sqrt and atan2

void convertToPolar(double x, double y, double& r, double& theta) {
    r = std::sqrt(x*x + y*y);
    theta = std::atan2(y, x); // Handles all quadrants
}

int main() {
    double x = 1.0;
    double y = 1.0;
    double r, theta;

    convertToPolar(x, y, r, theta);

    std::cout << "Cartesian (" << x << ", " << y << ") in Polar: r = " << r << ", theta = " << theta << " radians" << std::endl;
    return 0;
}