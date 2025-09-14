#include <iostream>
#include <stack>
int main() {
    std::stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element: " << myStack.top() << std::endl; 
    myStack.pop();

    std::cout << "New top element: " << myStack.top() << std::endl; 
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty. Size: " << myStack.size() << std::endl;
    }

    return 0;
}
