#include <iostream>

class MyClass {
public:
    int b;
    int a;

    MyClass(int val_a, int val_b) : b(val_b), a(val_a) {
        std::cout << "Constructor called." << std::endl;
    }
};

int main() {
    MyClass obj(10, 20); // 'a' initialized to 10, 'b' initialized to 20

    std::cout << "Value of obj.a: " << obj.a << std::endl;
    std::cout << "Value of obj.b: " << obj.b << std::endl;

    return 0;
}