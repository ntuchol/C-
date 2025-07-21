#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, C++!";

    // Using a regular iterator to print characters
    std::cout << "Forward iteration: ";
    for (std::string::iterator it = myString.begin(); it != myString.end(); ++it) {
        std::cout << *it;
    }
    std::cout << std::endl;

    // Using a const_iterator (for read-only access)
    std::cout << "Forward const iteration: ";
    for (std::string::const_iterator cit = myString.cbegin(); cit != myString.cend(); ++cit) {
        std::cout << *cit;
    }
    std::cout << std::endl;

    // Using a range-based for loop (simplified iteration)
    std::cout << "Range-based for loop: ";
    for (char c : myString) {
        std::cout << c;
    }
    std::cout << std::endl;

    return 0;
}