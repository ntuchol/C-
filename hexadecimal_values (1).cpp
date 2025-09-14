int hexValue = 0xFF; 
int anotherHex = 0xA5; 


#include <iostream>
#include <iomanip> 

    int main() {
        int decimalValue = 255;
        std::cout << "Decimal: " << decimalValue << std::endl;
        std::cout << "Hexadecimal: " << std::hex << decimalValue << std::endl;
        return 0;
    }
