#include <iostream>

class MyStaticClass {
public:
    MyStaticClass() {
        std::cout << "MyStaticClass constructor called." << std::endl;
    }
    ~MyStaticClass() { // Destructor for the static object
        std::cout << "MyStaticClass destructor called." << std::endl;
    }
};

static MyStaticClass globalStaticObject; // Global static object

void func() {
    static MyStaticClass functionStaticObject; // Function-scope static object
    std::cout << "func() called." << std::endl;
}

int main() {
    std::cout << "main() started." << std::endl;
    func();
    std::cout << "main() finished." << std::endl;
    return 0;
}
