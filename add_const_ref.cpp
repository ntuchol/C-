#include <iostream>

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}
};

// Function taking a constant reference
void printValue(const MyClass& obj) {
    std::cout << "Value: " << obj.value << std::endl;
    // obj.value = 10; // This would cause a compile-time error
}

int main() {
    MyClass obj1(5);
    printValue(obj1); // Pass by constant reference

    // You can also pass a temporary object
    printValue(MyClass(7)); 

    return 0;
}