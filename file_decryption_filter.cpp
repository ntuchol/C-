#include <iostream>
#include <fstream>
#include <string>

// A very simple decryption function (for demonstration purposes only)
char decryptChar(char encryptedChar, int key) {
    return encryptedChar - key; // Simple shift cipher decryption
}

int main() {
    std::ifstream inputFile("encrypted.txt", std::ios::binary); // Open encrypted file
    if (!inputFile.is_open()) {
        std::cerr << "Error opening encrypted file." << std::endl;
        return 1;
    }

    std::ofstream outputFile("decrypted.txt", std::ios::binary); // Open output file
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    int decryptionKey = 10; // Example key (should be securely managed in real applications)
    char ch;

    while (inputFile.get(ch)) {
        outputFile.put(decryptChar(ch, decryptionKey));
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File decrypted successfully." << std::endl;
    return 0;
}