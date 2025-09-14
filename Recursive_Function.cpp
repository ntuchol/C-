#include <iostream>

int log2_recursive(int n) {
    if (n == 1) {
        return 0;
    } 
    else if (n <= 0) {
        return -1; 
    }
    else {
        return 1 + log2_recursive(n / 2);
    }
}

int main() {
    int number = 8;
    int result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") = " << result << std::endl; 
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    number = 16;
    result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") = " << result << std::endl; 
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    number = 7; 
    result = log2_recursive(number);
    if (result != -1) {
        std::cout << "log2(" << number << ") (approx) = " << result << std::endl; 
    } else {
        std::cout << "Invalid input for log2." << std::endl;
    }

    return 0;
}
