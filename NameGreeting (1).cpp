#include <iostream> // Required for input/output operations (e.g., std::cout)

int main() {
    // Displaying the sizes of various fundamental integer types
    std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of signed char: " << sizeof(signed char) << " bytes" << std::endl;
    std::cout << "Size of unsigned char: " << sizeof(unsigned char) << " bytes" << std::endl;
    std::cout << "Size of short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of unsigned short: " << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of unsigned long: " << sizeof(unsigned long) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "Size of unsigned long long: " << sizeof(unsigned long long) << " bytes" << std::endl;

    // Displaying the sizes of floating-point types
    std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of long double: " << sizeof(long double) << " bytes" << std::endl;

    // Displaying the size of the boolean type
    std::cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;

    // Displaying the size of the wide character type
    std::cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;

    // Displaying the size of the fixed-width character types (C++11 onwards)
    std::cout << "Size of char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "Size of char32_t: " << sizeof(char32_t) << " bytes" << std::endl;

    return 0; // Indicate successful program execution
}