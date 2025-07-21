#include <iostream>
#include <string>

int main() {
    std::string text = "apple banana apple orange";

    // Find the last occurrence of "apple"
    size_t found_pos = text.rfind("apple");
    if (found_pos != std::string::npos) {
        std::cout << "Last 'apple' found at index: " << found_pos << std::endl; // Output: 13
    }

    // Find the last occurrence of 'a' starting from index 10
    size_t char_found_pos = text.rfind('a', 10);
    if (char_found_pos != std::string::npos) {
        std::cout << "Last 'a' found before or at index 10: " << char_found_pos << std::endl; // Output: 7 (from "banana")
    }

    // Search for a non-existent substring
    size_t not_found_pos = text.rfind("grape");
    if (not_found_pos == std::string::npos) {
        std::cout << "'grape' not found." << std::endl;
    }

    return 0;
}