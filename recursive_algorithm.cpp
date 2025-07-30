#include <iostream>

long long factorial(int n) {
    // Base Case
    if (n == 0) {
        return 1;
    }
    // Recursive Step
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    std::cout << "Factorial of " << num << " is: " << factorial(num) << std::endl; // Output: 120
    return 0;
}