#include <iostream> 
int main() {
    double num1, num2, average;

     std::cout << "Enter the first number: ";
    std::cin >> num1;

     std::cout << "Enter the second number: ";
    std::cin >> num2;

      average = (num1 + num2) / 2.0; 
    std::cout << "The average of " << num1 << " and " << num2 << " is: " << average << std::endl;

    return 0; 
}
