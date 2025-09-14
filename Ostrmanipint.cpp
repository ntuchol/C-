#include <iostream>
#include <iomanip>

int main() {
    int num = 42;
    std::cout << std::setw(5) << num << std::endl; 
    return 0;
}

#include <iostream>
#include <iomanip>

int main() {
    int num = 42;
    std::cout << std::setfill('0') << std::setw(5) << num << std::endl; 
    return 0;
}

#include <iostream>
#include <iomanip>

int main() {
    int num = 42;
    std::cout << std::dec << num << std::endl; 
    std::cout << std::oct << num << std::endl; 
    std::cout << std::hex << num << std::endl; 
    return 0;
}

#include <iostream>
#include <iomanip>

int main() {
    std::ios state(nullptr); 
    std::cout << "The answer in decimal is: " << 42 << std::endl;

    state.copyfmt(std::cout); 
    std::cout << "In hex: 0x"
              << std::hex << std::uppercase << std::setw(8) << std::setfill('0')
              << 42
              << std::endl;
    std::cout.copyfmt(state); 
    std::cout << "Back to decimal: " << 42 << std::endl;
    return 0;
}
