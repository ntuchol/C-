#include <iostream>

void myFunction(int param) {
    int localVariable = param * 2; 
    std::cout << "Local variable: " << localVariable << std::endl;
} 

int main() {
    int mainVariable = 10; 
    myFunction(mainVariable); 
    std::cout << "Main variable: " << mainVariable << std::endl;
    return 0;
}
