#include <iostream>

int main() {
    int n; 
    
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n; // Read the user's input into 'n'

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1; 
    }

    long long sum = static_cast<long long>(n) * (n + 1) / 2; 

    std::cout << "The sum of numbers from 1 to " << n << " is: " << sum << std::endl;

    return 0; 
}
