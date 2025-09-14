#include <iostream>
#include <fstream>
#include <string>

char decryptChar(char encryptedChar, int key) {
    return encryptedChar - key; 
}

int main() {
    std::ifstream inputFile("encrypted.txt", std::ios::binary); 
    if (!inputFile.is_open()) {
        std::cerr << "Error opening encrypted file." << std::endl;
        return 1;
    }

    std::ofstream outputFile("decrypted.txt", std::ios::binary); 
    if (!outputFile.is_open()) {
        std::cerr << "Error opening output file." << std::endl;
        return 1;
    }

    int decryptionKey = 10; 
    char ch;

    while (inputFile.get(ch)) {
        outputFile.put(decryptChar(ch, decryptionKey));
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File decrypted successfully." << std::endl;
    return 0;
}
