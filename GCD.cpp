#include <iostream>
#include <numeric> // Required for std::gcd

int main() {
    int num1 = 48;
    int num2 = 18;
    int result = std::gcd(num1, num2);
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    return 0;
}