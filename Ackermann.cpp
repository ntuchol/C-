#include <iostream>

long long ackermann(long long m, long long n) {
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
    std::cout << "A(3, 0) = " << ackermann(3, 0) << std::endl; 
    std::cout << "A(3, 1) = " << ackermann(3, 1) << std::endl;
    return 0;
}
