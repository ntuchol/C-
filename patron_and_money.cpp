#include <iostream>
#include <string>
#include <vector>

class Account {
private:
    double balance;
public:
    Account() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposit successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: $" << balance << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient funds." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    double getBalance() const {
        return balance;
    }
};

class Patron {
private:
    std::string name;
    int patronID;
    Account checkingAccount; // Each patron has a checking account
public:
    Patron(const std::string& n, int id) : name(n), patronID(id) {}

    void displayInfo() const {
        std::cout << "Patron Name: " << name << std::endl;
        std::cout << "Patron ID: " << patronID << std::endl;
        std::cout << "Checking Account Balance: $" << checkingAccount.getBalance() << std::endl;
    }

    Account& getCheckingAccount() {
        return checkingAccount;
    }
};

int main() {
    Patron patron1("Alice Smith", 1001);
    patron1.getCheckingAccount().deposit(500.0);
    patron1.getCheckingAccount().withdraw(150.0);
    patron1.displayInfo();

    return 0;
}