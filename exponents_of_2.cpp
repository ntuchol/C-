#include <iostream>

int main() {
    int n = 5;
    int result = 1 << n; // Calculates 2^5
    std::cout << "2 to the power of " << n << " is: " << result << std::endl;
    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    double base = 2;
    double exponent = 5;
    double result = pow(base, exponent); // Calculates 2^5
    std::cout << "2 to the power of " << exponent << " is: " << result << std::endl;
    return 0;
}

#include <iostream>

int main() {
    int n = 5;
    int result = 1;
    for (int i = 0; i < n; ++i) {
        result *= 2;
    }
    std::cout << "2 to the power of " << n << " is: " << result << std::endl;
    return 0;
}