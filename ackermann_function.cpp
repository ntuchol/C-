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
    std::cout << "Ackermann(0, 0) = " << ackermann(0, 0) << std::endl; // Expected: 1
    std::cout << "Ackermann(1, 0) = " << ackermann(1, 0) << std::endl; // Expected: 2
    std::cout << "Ackermann(1, 1) = " << ackermann(1, 1) << std::endl; // Expected: 3
    std::cout << "Ackermann(2, 2) = " << ackermann(2, 2) << std::endl; // Expected: 7
    std::cout << "Ackermann(3, 1) = " << ackermann(3, 1) << std::endl; // Expected: 13
    return 0;
}
