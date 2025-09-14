#include <iostream>
#include <cctype> 
int main() {
    char char1 = 'k';
    char char2 = '7';
    char char3 = '$';

    if (std::isalnum(char1)) {
        std::cout << char1 << " is alphanumeric." << std::endl;
    } else {
        std::cout << char1 << " is not alphanumeric." << std::endl;
    }

    if (std::isalnum(char2)) {
        std::cout << char2 << " is alphanumeric." << std::endl;
    } else {
        std::cout << char2 << " is not alphanumeric." << std::endl;
    }

    if (std::isalnum(char3)) {
        std::cout << char3 << " is alphanumeric." << std::endl;
    } else {
        std::cout << char3 << " is not alphanumeric." << std::endl;
    }

    return 0;
}
