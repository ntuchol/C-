#include <iostream>
#include <limits> 
int get_integer_input() {
    int value;
    while (true) {
        std::cout << "Enter an integer: ";
        if (std::cin >> value) { 
            return value; 
        } else {
            std::cout << "Invalid input. Please enter a valid integer." << std::endl;
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
    }
}

int main() {
    int number = get_integer_input();
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
