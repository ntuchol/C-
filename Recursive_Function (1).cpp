#include <iostream>

int factorial(int n) {
    // Base Case: Factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    } 
    // Recursive Case: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl; // Output: Factorial of 5 is: 120
    return 0;
}