#include <bitset>
#include <iostream>
#include <string>

int main() {
    // Create a bitset of 8 bits, initialized to 0
    std::bitset<8> b1; 
    std::cout << "b1: " << b1 << std::endl; // Output: 00000000

    // Create a bitset from an unsigned long
    std::bitset<8> b2(42); // 42 in binary is 00101010
    std::cout << "b2: " << b2 << std::endl; // Output: 00101010

    // Create a bitset from a string
    std::bitset<8> b3(std::string("11010010"));
    std::cout << "b3: " << b3 << std::endl; // Output: 11010010

    // Access and modify individual bits
    b1[0] = 1; // Set the first bit (rightmost)
    b1.set(7); // Set the last bit (leftmost)
    std::cout << "b1 after setting bits: " << b1 << std::endl; // Output: 10000001

    // Perform bitwise operations
    std::bitset<8> result = b2 & b3;
    std::cout << "b2 & b3: " << result << std::endl; // Output: 00010010

    // Count set bits
    std::cout << "Number of set bits in b3: " << b3.count() << std::endl; // Output: 4

    // Convert to string
    std::string s = b2.to_string();
    std::cout << "b2 as string: " << s << std::endl; // Output: 00101010

    return 0;
}