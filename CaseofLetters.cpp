#include <iostream> 
#include <string>   
#include <cctype>   

int main() {
    std::string inputString; 
    
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    for (char &c : inputString) {
        if (std::islower(c)) { 
            c = std::toupper(c); 
        } else if (std::isupper(c)) {
            c = std::tolower(c); 
        }
    }

    std::cout << "String with reversed case: " << inputString << std::endl;

    return 0; 
}
