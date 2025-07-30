#include <iostream>
#include <string>
#include <cctype> // For isdigit()

int main() {
    std::string ssn;
    std::cout << "Enter SSN (ddd-dd-dddd): ";
    std::getline(std::cin, ssn);

    bool isValid = true; // Assume valid until proven otherwise

    // Check length
    if (ssn.length() != 11) {
        isValid = false;
    }

    // Check dashes and digits
    if (isValid) {
        for (int i = 0; i < ssn.length(); ++i) {
            if ((i == 3 || i == 6) && ssn[i] != '-') { // Check dash positions
                isValid = false;
                break;
            } else if ((i != 3 && i != 6) && !isdigit(ssn[i])) { // Check digit positions
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        std::cout << "The SSN is valid." << std::endl;
    } else {
        std::cout << "Invalid SSN format!" << std::endl;
    }

    return 0;
}