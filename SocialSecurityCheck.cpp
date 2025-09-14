#include <iostream>
#include <string>
#include <cctype> 
int main() {
    std::string ssn;
    std::cout << "Enter SSN (ddd-dd-dddd): ";
    std::getline(std::cin, ssn);

    bool isValid = true; 
    if (ssn.length() != 11) {
        isValid = false;
    }

    if (isValid) {
        for (int i = 0; i < ssn.length(); ++i) {
            if ((i == 3 || i == 6) && ssn[i] != '-') { 
                isValid = false;
                break;
            } else if ((i != 3 && i != 6) && !isdigit(ssn[i])) { 
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
