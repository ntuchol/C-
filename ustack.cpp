#include <iostream>
#include <stack> // Required for std::stack

int main() {
    // Create a stack of integers
    std::stack<int> myStack;

    // Push elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Access the top element
    std::cout << "Top element: " << myStack.top() << std::endl; // Output: 30

    // Pop an element
    myStack.pop();

    // Access the new top element
    std::cout << "New top element: " << myStack.top() << std::endl; // Output: 20

    // Check if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty. Size: " << myStack.size() << std::endl; // Output: Size: 2
    }

    return 0;
}