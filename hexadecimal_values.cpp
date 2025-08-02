int hexValue = 0xFF; // Represents 255 in decimal
int anotherHex = 0xA5; // Represents 165 in decimal


 #include <iostream>
    #include <iomanip> // For std::hex

    int main() {
        int decimalValue = 255;
        std::cout << "Decimal: " << decimalValue << std::endl;
        std::cout << "Hexadecimal: " << std::hex << decimalValue << std::endl;
        return 0;
    }