#include <iostream>
#include <cmath> 

int main() {
    double num1 = 3.7;
    double num2 = 3.2;
    double num3 = 3.5;
    double num4 = -3.5;

    std::cout << "round(" << num1 << ") = " << std::round(num1) << std::endl; 
    std::cout << "round(" << num2 << ") = " << std::round(num2) << std::endl; 
    std::cout << "round(" << num3 << ") = " << std::round(num3) << std::endl; 
    std::cout << "round(" << num4 << ") = " << std::round(num4) << std::endl; 

    return 0;
}
