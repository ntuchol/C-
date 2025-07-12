#include <iostream>
#include <utility> // Required for std::swap

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    std::swap(a, b); // Swaps the values of a and b

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    std::string s1 = "hello";
    std::string s2 = "world";

    std::cout << "Before swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;

    std::swap(s1, s2); // Swaps the values of s1 and s2

    std::cout << "After swap: s1 = " << s1 << ", s2 = " << s2 << std::endl;

    return 0;