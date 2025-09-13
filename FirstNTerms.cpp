#include <iostream>
int sumNaturalNumbers(int n) {
    if (n <= 0) { 
        return 0;
    }
    else { 
        return n + sumNaturalNumbers(n - 1);
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int sum = sumNaturalNumbers(n);
        std::cout << "The sum of the first " << n << " natural numbers is: " << sum << std::endl;
    }

    return 0;
}
