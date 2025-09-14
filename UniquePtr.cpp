#include <iostream>
#include <memory> 
class MyClass {
public:
    MyClass() { std::cout << "MyClass created\n"; }
    ~MyClass() { std::cout << "MyClass destroyed\n"; }
};

int main() {
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();

    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);

    if (!ptr1) {
        std::cout << "ptr1 is empty\n";
    }

    return 0;
}
