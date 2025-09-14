#include <iostream> 
#include <string>   

int main() {
    std::string userName;

    std::cout << "Please enter your name: ";
    std::getline(std::cin, userName);

    std::cout << "Hello, " << userName << "!" << std::endl;

    int num1, num2;

    std::cout << "Please enter the first number: ";
    std::cin >> num1;

    std::cout << "Please enter the second number: ";
    std::cin >> num2;

    std::cout << "You entered " << num1 << " and " << num2 << "." << std::endl;

    return 0; 
}
