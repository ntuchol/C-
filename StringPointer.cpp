#include <iostream>

int main() {
    const char* myStringPtr = "Hello, C++ Pointers!";

    std::cout << "String literal: " << myStringPtr << std::endl;

    return 0;
}
#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, std::string!";

    std::string* myStringPtr = &myString;

    std::cout << "std::string via pointer: " << *myStringPtr << std::endl;

    return 0;
}
