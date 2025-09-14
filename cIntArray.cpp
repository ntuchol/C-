#include <iostream>

int main() {
    int numbers[5]; 
    std::cout << "Enter 5 integer numbers:" << std::endl;

    for (int i = 0; i < 5; ++i) {
        std::cout << "Enter number " << i + 1 << ": ";
        std::cin >> numbers[i]; 
    }

    std::cout << "The numbers entered are: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
#include <string> 
int main() {
    char name_char_array[50]; 
    std::string name_string; 
    std::cout << "Enter your first name (char array): ";
    std::cin >> name_char_array; 
    std::cin.ignore(); 
    std::cout << "Enter your full name (std::string): ";
    std::getline(std::cin, name_string); 
    std::cout << "First name: " << name_char_array << std::endl;
    std::cout << "Full name: " << name_string << std::endl;

    return 0;
}
