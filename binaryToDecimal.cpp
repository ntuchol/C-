#include <iostream>
#include <cmath> 
int binaryToDecimal(long long n) {
    int decimalValue = 0;
    int i = 0; 
    int remainder;

    while (n != 0) {
        remainder = n % 10; 
        n /= 10;          
        decimalValue += remainder * pow(2, i); 
        ++i;           
    }
    return decimalValue;
}

int main() {
    long long binaryNumber;
    std::cout << "Enter a binary number: ";
    std::cin >> binaryNumber;
    std::cout << binaryNumber << " in binary = " << binaryToDecimal(binaryNumber) << " in decimal" << std::endl;
    return 0;
}
