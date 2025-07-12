#include <iostream>

int main() {
    double balance = 100.50;
    double deposit = 25.75;
    double total = balance + deposit;
    std::cout << "Total money: " << total << std::endl;
    return 0;
}

#include <iostream>

int main() {
    long long balance_cents = 10050; // $100.50
    long long deposit_cents = 2575;  // $25.75
    long long total_cents = balance_cents + deposit_cents;
    
    // Convert back to dollars and cents for display
    double total_dollars = static_cast<double>(total_cents) / 100.0;
    std::cout << "Total money: $" << total_dollars << std::endl;
    return 0;
}


#include <iostream>

class Money {
private:
    long long cents;
public:
    Money(double dollars) : cents(static_cast<long long>(dollars * 100)) {}
    Money(long long c) : cents(c) {}

    Money operator+(const Money& other) const {
        return Money(cents + other.cents);
    }

    void display() const {
        std::cout << "$" << static_cast<double>(cents) / 100.0;
    }
};

int main() {
    Money balance(100.50);
    Money deposit(25.75);
    Money total = balance + deposit;
    
    std::cout << "Total money: ";
    total.display();
    std::cout << std::endl;
    return 0;
}