#include <iostream> 
#include <iomanip>  
int main() {
    double celsius;
    double fahrenheit; 

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << " F" << std::endl;

    return 0; 
}
