#include <iostream> 
int main() {
    double number; 
    std::cout << "Enter a number to square: "; 
    std::cin >> number; // Read the number from the user

    double squared_number = number * number; 

    std::cout << "The square of " << number << " is: " << squared_number << std::endl;

    return 0; 
}
