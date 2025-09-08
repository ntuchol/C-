#include <string>
#include <iostream>

int main() {
    std::string phoneNumber = "1234567"; 
    std::cout << "Phone Number: " << phoneNumber << std::endl;

    std::cout << "Enter a 7-digit phone number: ";
    std::cin >> phoneNumber;

    if (phoneNumber.length() == 7) {
        std::cout << "Valid 7-digit number entered." << std::endl;
    } else {
        std::cout << "Invalid length." << std::endl;
    }

    return 0;
}

int main() {
    int phoneNumber = 1234567; 
    std::cout << "Phone Number: " << phoneNumber << std::endl;

    std::cout << "Enter a 7-digit phone number (no leading zeros): ";
    std::cin >> phoneNumber;

    if (phoneNumber >= 1000000 && phoneNumber <= 9999999) {
        std::cout << "Valid 7-digit number entered." << std::endl;
    } else {
        std::cout << "Invalid number or leading zeros present." << std::endl;
    }

    return 0;
}
