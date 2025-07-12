#include <iostream>
#include <cctype> // Required for toupper and tolower

int main() {
    char ch = 'a';
    char upper_ch = toupper(ch); // upper_ch will be 'A'
    std::cout << "Uppercase: " << upper_ch << std::endl;

    char ch2 = 'B';
    char lower_ch = tolower(ch2); // lower_ch will be 'b'
    std::cout << "Lowercase: " << lower_ch << std::endl;

    return 0;
}

#include <iostream>
#include <string>
#include <algorithm> // Required for std::transform
#include <cctype>    // Required for toupper and tolower

int main() {
    std::string text = "Hello World!";

    // Convert to uppercase
    std::transform(text.begin(), text.end(), text.begin(), ::toupper);
    std::cout << "Uppercase string: " << text << std::endl; // Output: HELLO WORLD!

    // Convert to lowercase
    std::transform(text.begin(), text.end(), text.begin(), ::tolower);
    std::cout << "Lowercase string: " << text << std::endl; // Output: hello world!

    return 0;
}