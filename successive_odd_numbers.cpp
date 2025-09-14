#include <iostream>

void printOddNumbers(int min, int max) {
    if (min % 2 == 0) {
        min++; 
    }
    
    for (int i = min; i <= max; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    printOddNumbers(1, 10);  
    printOddNumbers(2, 11);  
    return 0;
}

