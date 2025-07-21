#include <iostream>
#include <string>
#include <algorithm> // For std::reverse

std::string convertToBaseB(int n, int b) {
    if (n == 0) {
        return "0";
    }
    std::string result = "";
    while (n > 0) {
        int remainder = n % b;
        if (remainder < 10) {
            result += (char)('0' + remainder); // Convert digit to char
        } else {
            // For bases > 10 (e.g., hexadecimal), use letters A-F
            result += (char)('A' + (remainder - 10));
        }
        n /= b;
    }
    std::reverse(result.begin(), result.end()); // Reverse to get correct order
    return result;
}

int main() {
    int decimalNumber = 255;
    int base = 16; // Hexadecimal

    std::string baseBRepresentation = convertToBaseB(decimalNumber, base);
    std::cout << "Decimal " << decimalNumber << " in base " << base << " is: " << baseBRepresentation << std::endl;

    decimalNumber = 12;
    base = 2; // Binary
    baseBRepresentation = convertToBaseB(decimalNumber, base);
    std::cout << "Decimal " << decimalNumber << " in base " << base << " is: " << baseBRepresentation << std::endl;

    return 0;
}