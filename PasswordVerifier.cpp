#include <iostream>
#include <string>
#include <cctype> 

bool verifyPassword(const std::string& password) {
    if (password.length() < 8) { 
        std::cout << "Password must be at least 8 characters long." << std::endl;
        return false;
    }

    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
        } else if (islower(c)) {
            hasLowercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else if (ispunct(c)) { 
            hasSpecial = true;
        }
    }

    if (!hasUppercase) {
        std::cout << "Password must contain at least one uppercase letter." << std::endl;
        return false;
    }
    if (!hasLowercase) {
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

    return true; 
}

int main() {
    std::string userPassword;
    do {
        std::cout << "Enter a password: ";
        std::getline(std::cin, userPassword);
    } while (!verifyPassword(userPassword));

    std::cout << "Password accepted!" << std::endl;
    return 0;
}
