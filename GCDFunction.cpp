#include <iostream>
#include <numeric> // For std::gcd

int main() {
    int a = 48;
    int b = 18;
    int result = std::gcd(a, b);
    std::cout << "GCD of " << a << " and " << b << " is: " << result << std::endl;
    return 0;
}
