#include <iostream> // For input/output operations
#include <cmath>    // For M_PI (or define PI yourself)
#include <iomanip>  // For setprecision

int main() {
    double radius;
    double circumference;

    // Prompt user for input
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Calculate the circumference
    circumference = 2 * M_PI * radius; // M_PI is defined in <cmath>

    // Display the result with a certain precision
    std::cout << std::fixed << std::setprecision(2); // Set precision to 2 decimal places
    std::cout << "The circumference of the circle is: " << circumference << std::endl;

    return 0;
}