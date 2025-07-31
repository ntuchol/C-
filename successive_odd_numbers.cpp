#include <iostream>

void printOddNumbers(int min, int max) {
    // Ensure the starting number is odd. If min is even, increment it.
    if (min % 2 == 0) {
        min++; 
    }
    
    // Loop through and print every other number (odd numbers)
    for (int i = min; i <= max; i += 2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    printOddNumbers(1, 10);  // Output: 1 3 5 7 9
    printOddNumbers(2, 11);  // Output: 3 5 7 9 11
    return 0;
}

