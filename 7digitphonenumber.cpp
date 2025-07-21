#include <string>
#include <iostream>

int main() {
    std::string phoneNumber = "1234567"; // Example 7-digit number
    std::cout << "Phone Number: " << phoneNumber << std::endl;

    // You can also get input from the user
    std::cout << "Enter a 7-digit phone number: ";
    std::cin >> phoneNumber;

    // Basic validation for length
    if (phoneNumber.length() == 7) {
        std::cout << "Valid 7-digit number entered." << std::endl;
    } else {
        std::cout << "Invalid length." << std::endl;
    }

    return 0;
}

int main() {
    int phoneNumber = 1234567; // Example 7-digit number
    std::cout << "Phone Number: " << phoneNumber << std::endl;

    // If you need to handle input as an integer:
    std::cout << "Enter a 7-digit phone number (no leading zeros): ";
    std::cin >> phoneNumber;

    // Basic check for range (for 7-digit numbers without leading zeros)
    if (phoneNumber >= 1000000 && phoneNumber <= 9999999) {
        std::cout << "Valid 7-digit number entered." << std::endl;
    } else {
        std::cout << "Invalid number or leading zeros present." << std::endl;
    }

    return 0;
}