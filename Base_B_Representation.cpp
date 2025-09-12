#include <iostream>
#include <string>
#include <algorithm> 
std::string convertToBaseB(int n, int b) {
    if (n == 0) {
        return "0";
    }
    std::string result = "";
    while (n > 0) {
        int remainder = n % b;
        if (remainder < 10) {
            result += (char)('0' + remainder); 
        } else {
            result += (char)('A' + (remainder - 10));
        }
        n /= b;
    }
    std::reverse(result.begin(), result.end()); 
    return result;
}

int main() {
    int decimalNumber = 255;
    int base = 16; 

    std::string baseBRepresentation = convertToBaseB(decimalNumber, base);
    std::cout << "Decimal " << decimalNumber << " in base " << base << " is: " << baseBRepresentation << std::endl;

    decimalNumber = 12;
    base = 2; 
    baseBRepresentation = convertToBaseB(decimalNumber, base);
    std::cout << "Decimal " << decimalNumber << " in base " << base << " is: " << baseBRepresentation << std::endl;

    return 0;
}
