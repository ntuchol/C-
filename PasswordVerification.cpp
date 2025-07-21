#include <iostream>
#include <string>
#include <cctype> // For isupper, islower, isdigit, ispunct

bool verifyPassword(const std::string& password) {
    if (password.length() < 8) { // Example: Minimum length 8
        std::cout << "Password must be at least 8 characters long." << std::endl;
        return false;
    }

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char c : password) {
        if (isupper(c)) {
            hasUpper = true;
        } else if (islower(c)) {
            hasLower = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c)) {
            hasSpecial = true;
        }
    }

    if (!hasUpper) {
        std::cout << "Password must contain at least one uppercase letter." << std::endl;
        return false;
    }
    if (!hasLower) {
        std::cout << "Password must contain at least one lowercase letter." << std::endl;
        return false;
    }
    if (!hasDigit) {
        std::cout << "Password must contain at least one digit." << std::endl;
        return false;
    }
    if (!hasSpecial) {
        std::cout << "Password must contain at least one special character." << std::endl;
        return false;
    }

    return true; // Password meets all criteria
}

int main() {
    std::string userPassword;
    std::cout << "Enter your password: ";
    std::getline(std::cin, userPassword);

    if (verifyPassword(userPassword)) {
        std::cout << "Password is valid." << std::endl;
    } else {
        std::cout << "Password verification failed." << std::endl;
    }

    return 0;
}