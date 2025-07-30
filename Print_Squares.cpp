#include <iostream>

    int main() {
        // Print squares of numbers from 1 to 10
        for (int i = 1; i <= 10; ++i) {
            int square = i * i;
            std::cout << "The square of " << i << " is " << square << std::endl;
        }
        return 0;
    }
