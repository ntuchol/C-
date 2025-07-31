#include <iostream>
#include <string>

int main() {
    std::string storedPassword = "mySecretPassword"; // Insecure: never store plain text passwords
    std::string enteredPassword;

    std::cout << "Enter password: ";
    std::cin >> enteredPassword;

    if (enteredPassword == storedPassword) {
        std::cout << "Login successful!" << std::endl;
    } else {
        std::cout << "Incorrect password." << std::endl;
    }

    return 0;
}