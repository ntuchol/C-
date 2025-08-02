#include <iostream>
#include <string>

std::string caesarEncrypt(const std::string& text, int shift) {
    std::string result = "";
    for (char c : text) {
        if (isalpha(c)) { // Check if it's an alphabet character
            char base = isupper(c) ? 'A' : 'a';
            result += static_cast<char>((c - base + shift) % 26 + base);
        } else {
            result += c; // Keep non-alphabetic characters as they are
        }
    }
    return result;
}

std::string caesarDecrypt(const std::string& text, int shift) {
    // Decryption is simply encryption with a negative shift
    return caesarEncrypt(text, 26 - (shift % 26)); 
}

int main() {
    std::string message = "Hello, World!";
    int key = 3;

    std::string encrypted_message = caesarEncrypt(message, key);
    std::string decrypted_message = caesarDecrypt(encrypted_message, key);

    std::cout << "Original: " << message << std::endl;
    std::cout << "Encrypted: " << encrypted_message << std::endl;
    std::cout << "Decrypted: " << decrypted_message << std::endl;

    return 0;
}