#include <compare> 
#include <iostream>

struct MyClass {
    int value;

    auto operator<=>(const MyClass& other) const = default; 
    auto operator<=>(const MyClass& other) const {
        return value <=> other.value;
    }
};

int main() {
    MyClass a{10};
    MyClass b{5};
    MyClass c{10};

    std::cout << (a < b) << std::endl;  
    std::cout << (a == c) << std::endl; 
    std::cout << (a > b) << std::endl;  

    return 0;
}
