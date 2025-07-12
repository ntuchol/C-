#include <iostream>
#include <cctype> // Required for toupper()

int main() {
    char ch = 'a';
    char uppercase_ch = toupper(ch);
    std::cout << "Original: " << ch << ", Uppercase: " << uppercase_ch << std::endl;

    ch = 'B'; // Already uppercase
    uppercase_ch = toupper(ch);
    std::cout << "Original: " << ch << ", Uppercase: " << uppercase_ch << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm> // Required for std::transform
#include <cctype>    // Required for toupper()

int main() {
    std::string text = "Hello World!";
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    // Note: Use ::toupper to explicitly refer to the global namespace version of toupper
    // to avoid ambiguity with potential overloads in std::.

    std::cout << "Uppercase string: " << text << std::endl;

    return 0;
}