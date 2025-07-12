#include <iostream>

class MyNumber {
private:
    int value;
public:
    MyNumber(int val) : value(val) {}

    // Overload unary minus operator
    MyNumber operator-() const {
        return MyNumber(-value); // Returns a new MyNumber object with negated value
    }

    void display() const {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyNumber num1(10);
    MyNumber num2 = -num1; // Calls the overloaded unary minus

    num1.display();
    num2.display();

    return 0;
}