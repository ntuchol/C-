#include <iostream>

bool isPerfectNumber(int num) {
    if (num <= 1) { 
        return false;
    }
    int sumOfDivisors = 1; 
    for (int i = 2; i * i <= num; ++i) { 
        if (num % i == 0) {
            sumOfDivisors += i;
            if (i * i != num) { 
                sumOfDivisors += num / i;
            }
        }
    }
    return sumOfDivisors == num;
}

int main() {
    int numberToTest = 28;
    if (isPerfectNumber(numberToTest)) {
        std::cout << numberToTest << " is a perfect number." << std::endl;
    } else {
        std::cout << numberToTest << " is not a perfect number." << std::endl;
    }

    std::cout << "Perfect numbers up to 1000:" << std::endl;
    for (int i = 1; i <= 1000; ++i) {
        if (isPerfectNumber(i)) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
