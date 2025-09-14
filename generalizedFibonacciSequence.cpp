#include <iostream>


void generateGeneralizedFibonacci(int a, int b, int n) {
    if (n <= 0) {
        return; 
    }

    std::cout << a << " "; 
    if (n == 1) {
        return;
    }

    std::cout << b << " "; 
    if (n == 2) {
        return;
    }
    int term1 = a;
    int term2 = b;
    for (int i = 3; i <= n; ++i) {
        int nextTerm = term1 + term2;
        std::cout << nextTerm << " ";
        term1 = term2;
        term2 = nextTerm;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Standard Fibonacci Sequence (0, 1): ";
    generateGeneralizedFibonacci(0, 1, 10);

    std::cout << "Generalized Fibonacci Sequence (3, 5): ";
    generateGeneralizedFibonacci(3, 5, 8);

    return 0;
}
