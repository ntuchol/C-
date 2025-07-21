#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

int main() {
    std::string text = "Hello, C++!";
    std::reverse(text.begin(), text.end()); // Reverses the string in-place
    std::cout << "Reversed string: " << text << std::endl;
    return 0;
}