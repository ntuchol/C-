#include <iostream>

class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}

    MyNumber operator-() const {
        return MyNumber(-value); 
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num1(10);
    MyNumber num2 = -num1; 
    num1.display();
    num2.display();

    return 0;
}
