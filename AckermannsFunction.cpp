#include <iostream>

unsigned long long ackermann(unsigned int m, unsigned int n) {
    if (m == 0) {
        return n + 1;
    } else if (n == 0) {
        return ackermann(m - 1, 1);
    } else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}

int main() {
    std::cout << "A(0, 0) = " << ackermann(0, 0) << std::endl; 
    std::cout << "A(1, 1) = " << ackermann(1, 1) << std::endl; 
    std::cout << "A(2, 2) = " << ackermann(2, 2) << std::endl; 
    std::cout << "A(3, 2) = " << ackermann(3, 2) << std::endl; 
    std::cout << "A(4, 1) = " << ackermann(4, 1) << std::endl;
    return 0;
}
