#include <iostream>

// Function to swap the content of two integers using pointers
void swap1(int* num1_ptr, int* num2_ptr) {
    int temp = *num1_ptr;  // Store the value pointed to by num1_ptr in a temporary variable
    *num1_ptr = *num2_ptr; // Assign the value pointed to by num2_ptr to the location pointed to by num1_ptr
    *num2_ptr = temp;      // Assign the value stored in temp (original value of num1) to the location pointed to by num2_ptr
}

int main() {
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    // Call swap1, passing the addresses of 'a' and 'b'
    swap1(&a, &b);

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}