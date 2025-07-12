#include <iostream>

int main() {
    // Declare a char pointer and initialize it with a string literal
    const char* myStringPtr = "Hello, C++ Pointers!";

    // Print the string pointed to by the pointer
    std::cout << "String literal: " << myStringPtr << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main() {
    // Declare a std::string object
    std::string myString = "Hello, std::string!";

    // Declare a pointer to a std::string and initialize it with the address of myString
    std::string* myStringPtr = &myString;

    // Print the string pointed to by the pointer
    std::cout << "std::string via pointer: " << *myStringPtr << std::endl;

    return 0;
}