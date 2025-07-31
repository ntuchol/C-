#include <iostream>
#include <string>

int main() {
    std::string text = "This is a sample string with a pattern.";
    std::string pattern = "pattern";

    size_t found_pos = text.find(pattern);

    if (found_pos != std::string::npos) {
        std::cout << "Pattern found at index: " << found_pos << std::endl;
    } else {
        std::cout << "Pattern not found." << std::endl;
    }

    return 0;
}