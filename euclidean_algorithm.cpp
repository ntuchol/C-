#include <iostream>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers to find their GCD: ";
    std::cin >> num1 >> num2;
    int result = gcd(num1, num2);
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    return 0;
}

#include <iostream>

int gcd_iterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    std::cout << "Enter two numbers to find their GCD: ";
    std::cin >> num1 >> num2;
    int result = gcd_iterative(num1, num2);
    std::cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << std::endl;
    return 0;
}