#include <iostream>
#include <iomanip> // For formatted output

using namespace std;

class SavingsAccount {
private:
    double balance;
    double interestRate; // Annual interest rate
    int withdrawals;     // Number of withdrawals made in the current month

public:
    // Constructor
    SavingsAccount(double initialBalance, double annualRate) {
        balance = initialBalance;
        interestRate = annualRate;
        withdrawals = 0;
    }

    // Deposit function
    void deposit(double amount) {
        if (amount <= 0) {
            cerr << "Invalid deposit amount." << endl;
            return;
        }
        balance += amount;
        cout << "Deposit of $" << fixed << setprecision(2) << amount << " successful." << endl;
    }

    // Withdraw function
    bool withdraw(double amount) {
        if (amount <= 0) {
            cerr << "Invalid withdrawal amount." << endl;
            return false;
        }
        if (balance < amount) {
            cerr << "Insufficient balance for withdrawal." << endl;
            return false;
        }
        balance -= amount;
        withdrawals++;
        cout << "Withdrawal of $" << fixed << setprecision(2) << amount << " successful." << endl;
        return true;
    }

    // Calculate and apply monthly interest
    void calculateMonthlyInterest() {
        double monthlyInterest = (balance * interestRate) / 12.0;
        balance += monthlyInterest;
        cout << "Monthly interest of $" << fixed << setprecision(2) << monthlyInterest << " applied." << endl;
    }

    // Display account information
    void displayAccountInfo() const {
        cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "Annual Interest Rate: " << fixed << setprecision(2) << interestRate * 100 << "%" << endl;
        cout << "Withdrawals this month: " << withdrawals << endl;
    }
};

int main() {
    SavingsAccount mySavings(1000.0, 0.04); // Initial balance $1000, 4% annual interest rate

    mySavings.displayAccountInfo();

    mySavings.deposit(250.0);
    mySavings.withdraw(100.0);
    mySavings.calculateMonthlyInterest();

    mySavings.displayAccountInfo();

    return 0;
}