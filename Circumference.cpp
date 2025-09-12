#include <iostream> 
#include <cmath>    
#include <iomanip>  

int main() {
    double radius;
    double circumference;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    circumference = 2 * M_PI * radius; // M_PI is defined in <cmath>

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "The circumference of the circle is: " << circumference << std::endl;

    return 0;
}
