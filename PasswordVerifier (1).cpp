#include <iostream>
#include <string>
#include <cctype> // For isupper, islower, isdigit

bool verifyPassword(const std::string& password) {
    if (password.length() < 8) { // Example: Minimum 8 characters
        std::cout << "Password must be at least 8 characters long.\n";
        return false;
    }

    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecial = false; // Optional: For special characters

    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
        } else if (islower(c)) {
            hasLowercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c) || c == ' ') { // Example: Punctuation or space as special
            hasSpecial = true;
        }
    }

    if (!hasUppercase) {
        std::cout << "Password must contain at least one uppercase letter.\n";
        return false;
    }
    if (!hasLowercase) {
        std::cout << "Password must contain at least one lowercase letter.\n";
        return false;
    }
    if (!hasDigit) {
        std::cout << "Password must contain at least one digit.\n";
        return false;
    }
    // Optional: Check for special character
    // if (!hasSpecial) {
    //     std::cout << "Password must contain at least one special character.\n";
    //     return false;
    // }

    return true; // Password is valid
}

int main() {
    std::string userPassword;
    std::cout << "Create your password: ";
    std::getline(std::cin, userPassword);

    if (verifyPassword(userPassword)) {
        std::cout << "Password is valid!\n";
    } else {
        std::cout << "Please try again with a stronger password.\n";
    }

    return 0;
}