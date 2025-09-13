#include <iostream> 
int readInteger() {
    int value;
    std::cout << "Enter an integer: ";
    std::cin >> value;
    return value;
}
#include <iostream> 
#include <string>   
std::string readString() {
    std::string text;
    std::cout << "Enter a word: ";
    std::cin >> text;
    return text;
}
#include <iostream> 
#include <string>   

std::string readLine() {
    std::string line;
    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line); 
    return line;
}
