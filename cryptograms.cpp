#include <iostream>
#include <string>
#include <map>

std::string caesarCipher(const std::string& text, int shift) {
    std::string result = "";
    for (char c : text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c; // Keep non-alphabetic characters as they are
        }
    }
    return result;
}

int main() {
    std::string message = "HELLO WORLD";
    int shift = 3;
    std::string encrypted_message = caesarCipher(message, shift);
    std::cout << "Original: " << message << std::endl;
    std::cout << "Encrypted: " << encrypted_message << std::endl; // Output: KHOOR ZRUOG
    return 0;
}