#include <iostream> // Required for input/output operations
#include <string>   // Required for using the string data type

int main() {
    // Declare a string variable to store the user's name
    std::string userName;

    // Prompt the user for their name
    std::cout << "Please enter your name: ";
    // Read the entire line of input, including spaces, into userName
    std::getline(std::cin, userName);

    // Greet the user
    std::cout << "Hello, " << userName << "!" << std::endl;

    // Declare integer variables to store the two numbers
    int num1, num2;

    // Prompt the user for the first number
    std::cout << "Please enter the first number: ";
    // Read the first number
    std::cin >> num1;

    // Prompt the user for the second number
    std::cout << "Please enter the second number: ";
    // Read the second number
    std::cin >> num2;

    // Optionally, you can display the numbers entered
    std::cout << "You entered " << num1 << " and " << num2 << "." << std::endl;

    return 0; // Indicate successful program execution
}
Explanation: