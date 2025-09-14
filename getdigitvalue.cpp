#include <iostream>

int main() {
    int number = 12345;

    while (number > 0) {
        int digit = number % 10;
        std::cout << digit << " "; 
        number /= 10;           
    }
    std::cout << std::endl; 
    return 0;
}
