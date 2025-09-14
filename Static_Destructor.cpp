#include <iostream>

class MyStaticClass {
public:
    MyStaticClass() {
        std::cout << "MyStaticClass constructor called." << std::endl;
    }
    ~MyStaticClass() { 
        std::cout << "MyStaticClass destructor called." << std::endl;
    }
};

static MyStaticClass globalStaticObject; 
void func() {
    static MyStaticClass functionStaticObject; 
    std::cout << "func() called." << std::endl;
}

int main() {
    std::cout << "main() started." << std::endl;
    func();
    std::cout << "main() finished." << std::endl;
    return 0;
}
