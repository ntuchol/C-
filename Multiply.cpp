

#include <iostream> 
int multiply(int a, int b) {
    return a * b; 
}

int main() {
    int num1, num2; 
    std::cout << "Enter the first number: "; 
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2; 
    int product_result = multiply(num1, num2); 

    std::cout << "The product is: " << product_result << std::endl; 

    return 0;
}
