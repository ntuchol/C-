#include <iostream>

class MyClass {
public:
    int value;
    MyClass(int v) : value(v) {}
};

void printValue(const MyClass& obj) {
    std::cout << "Value: " << obj.value << std::endl;
    obj.value = 10; 
}

int main() {
    MyClass obj1(5);
    printValue(obj1); 
    printValue(MyClass(7)); 

    return 0;
}
