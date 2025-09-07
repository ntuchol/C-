#include <iostream> 
#include <string>  

int main() {
    std::string binaryString; 
    std::cout << "Enter a string of 0s and 1s: ";

    std::cin >> binaryString; 

    std::cout << "You entered: " << binaryString << std::endl;

    for (char c : binaryString) {
        if (c == '0') {
            std::cout << "Found a zero." << std::endl;
        } else if (c == '1') {
            std::cout << "Found a one." << std::endl;
        } else {
            std::cout << "Found an invalid character: " << c << std::endl;
        }
    }

    return 0;
}
