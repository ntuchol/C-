#include <compare> // Required for comparison category types
#include <iostream>

struct MyClass {
    int value;

    // Define the spaceship operator
    auto operator<=>(const MyClass& other) const = default; 
    // Or you can define it manually:
    // auto operator<=>(const MyClass& other) const {
    //     return value <=> other.value;
    // }
};

int main() {
    MyClass a{10};
    MyClass b{5};
    MyClass c{10};

    std::cout << (a < b) << std::endl;  // Uses synthesized < from <=>
    std::cout << (a == c) << std::endl; // Uses synthesized == from <=>
    std::cout << (a > b) << std::endl;  // Uses synthesized > from <=>

    return 0;
}
