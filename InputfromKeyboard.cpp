#include <iostream> // Required for std::cin and std::cout

int readInteger() {
    int value;
    std::cout << "Enter an integer: ";
    std::cin >> value;
    return value;
}
#include <iostream> // Required for std::cin and std::cout
#include <string>   // Required for std::string

std::string readString() {
    std::string text;
    std::cout << "Enter a word: ";
    std::cin >> text;
    return text;
}
#include <iostream> // Required for std::cin and std::cout
#include <string>   // Required for std::string

std::string readLine() {
    std::string line;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line); // Use std::getline for lines with spaces
    return line;
}