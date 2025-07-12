#include <iostream>
#include <memory> // Required for std::unique_ptr

class MyClass {
public:
    MyClass() { std::cout << "MyClass created\n"; }
    ~MyClass() { std::cout << "MyClass destroyed\n"; }
};

int main() {
    // Create a unique_ptr owning a MyClass object
    std::unique_ptr<MyClass> ptr1 = std::make_unique<MyClass>();

    // Transfer ownership to another unique_ptr
    std::unique_ptr<MyClass> ptr2 = std::move(ptr1);

    // ptr1 is now empty, ptr2 owns the object
    if (!ptr1) {
        std::cout << "ptr1 is empty\n";
    }

    // The object will be destroyed when ptr2 goes out of scope
    return 0;
}