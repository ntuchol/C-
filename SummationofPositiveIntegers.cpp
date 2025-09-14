#include <iostream>

int main() {
    int n;
    int sum = 0;
    int i = 1;

    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n < 1) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; 
    }

    while (i <= n) {
        sum += i; 
        i++;      
    }

    std::cout << "The sum of positive integers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
