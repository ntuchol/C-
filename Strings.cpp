#include <iostream>
#include <string> // Required for std::string

int main() {
    std::string str1; // Declare the first string variable
    std::string str2; // Declare the second string variable

    // Prompt the user to enter the first string
    std::cout << "Enter the first string: ";
    std::cin >> str1; // Read the first string from input

    // Prompt the user to enter the second string
    std::cout << "Enter the second string: ";
    std::cin >> str2; // Read the second string from input

    // Compare the two strings lexicographically using the less-than operator
    if (str1 < str2) {
        std::cout << "\"" << str1 << "\" is lexicographically less than \"" << str2 << "\"." << std::endl;
    } else if (str2 < str1) {
        std::cout << "\"" << str2 << "\" is lexicographically less than \"" << str1 << "\"." << std::endl;
    } else {
        std::cout << "The two strings are lexicographically equal." << std::endl;
    }

    return 0; // Indicate successful program execution
}