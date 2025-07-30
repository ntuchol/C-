#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;
    std::cout << "ASCII Value of " << ch << " is " << static_cast<int>(ch) << std::endl;
    return 0;
}