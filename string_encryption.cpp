 #include <iostream>
    #include <string>

    std::string encryptDecryptXOR(std::string toEncrypt, char key) {
        std::string output = toEncrypt;
        for (char &c : output) {
            c ^= key;
        }
        return output;
    }