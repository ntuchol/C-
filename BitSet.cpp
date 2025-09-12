#include <bitset>
#include <iostream>
#include <string>

int main() {
    std::bitset<8> b1; 
    std::cout << "b1: " << b1 << std::endl; 

    std::bitset<8> b2(42); 
    std::cout << "b2: " << b2 << std::endl; 

    std::bitset<8> b3(std::string("11010010"));
    std::cout << "b3: " << b3 << std::endl;
    
    b1[0] = 1;
    b1.set(7); 
    std::cout << "b1 after setting bits: " << b1 << std::endl; 
    
    std::bitset<8> result = b2 & b3;
    std::cout << "b2 & b3: " << result << std::endl; 
    
    std::cout << "Number of set bits in b3: " << b3.count() << std::endl; 

    std::string s = b2.to_string();
    std::cout << "b2 as string: " << s << std::endl;
    return 0;
}
