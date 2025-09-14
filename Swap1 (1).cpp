#include <iostream>

// Function to swap the content of two integers using pointers
void swap1(int* num1_ptr, int* num2_ptr) {
    int temp = *num1_ptr;  
    *num1_ptr = *num2_ptr; 
    *num2_ptr = temp;      
}

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    swap1(&a, &b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
