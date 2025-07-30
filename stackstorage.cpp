#include <iostream>

void myFunction(int param) {
    int localVariable = param * 2; // localVariable is on the stack
    std::cout << "Local variable: " << localVariable << std::endl;
} // localVariable is deallocated when myFunction returns

int main() {
    int mainVariable = 10; // mainVariable is on the stack
    myFunction(mainVariable); // param is on the stack within myFunction's scope
    std::cout << "Main variable: " << mainVariable << std::endl;
    return 0;
} // mainVariable is deallocated when main returns