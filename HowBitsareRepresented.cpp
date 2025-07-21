#include <iostream>
#include <climits> // Required for CHAR_BIT
#include <string>

int main() {
    // Fundamental types
    std::cout << "Bits for fundamental types:" << std::endl;
    std::cout << "bool: " << sizeof(bool) * CHAR_BIT << " bits" << std::endl;
    std::cout << "char: " << sizeof(char) * CHAR_BIT << " bits" << std::endl;
    std::cout << "short: " << sizeof(short) * CHAR_BIT << " bits" << std::endl;
    std::cout << "int: " << sizeof(int) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long: " << sizeof(long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long long: " << sizeof(long long) * CHAR_BIT << " bits" << std::endl;
    std::cout << "float: " << sizeof(float) * CHAR_BIT << " bits" << std::endl;
    std::cout << "double: " << sizeof(double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "long double: " << sizeof(long double) * CHAR_BIT << " bits" << std::endl;
    std::cout << "size_t: " << sizeof(size_t) * CHAR_BIT << " bits" << std::endl; // For sizes and counts

    std::cout << std::endl;

    // Custom object (struct/class)
    struct MyObject {
        int x;
        double y;
        char z;
    };
    MyObject obj;
    std::cout << "Bits for a custom object (MyObject): " << sizeof(obj) * CHAR_BIT << " bits" << std::endl;

    std::cout << std::endl;

    // Pointer types
    int* int_ptr;
    std::cout << "Bits for an int pointer: " << sizeof(int_ptr) * CHAR_BIT << " bits" << std::endl;
    char* char_ptr;
    std::cout << "Bits for a char pointer: " << sizeof(char_ptr) * CHAR_BIT << " bits" << std::endl;

    return 0;
}