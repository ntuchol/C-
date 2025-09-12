#include <iostream>

int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    std::cout << "GCD of 56 and 98 is " << gcdIterative(56, 98) << std::endl;
    return 0;
}

#include <iostream>

int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcdRecursive(b, a % b);
}

int main() {
    std::cout << "GCD of 56 and 98 is " << gcdRecursive(56, 98) << std::endl;
    return 0;
}

#include <iostream>
#include <numeric> 

int main() {
    std::cout << "GCD of 56 and 98 is " << std::gcd(56, 98) << std::endl;
    return 0;
}
