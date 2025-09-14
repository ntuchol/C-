#include <iostream>
#include <iomanip> 

using namespace std;

class SavingsAccount {
private:
    double balance;
    double interestRate; 
    int withdrawals;    

public:
    SavingsAccount(double initialBalance, double annualRate) {
        balance = initialBalance;
        interestRate = annualRate;
        withdrawals = 0;
    }

    void deposit(double amount) {
        if (amount <= 0) {
            cerr << "Invalid deposit amount." << endl;
            return;
        }
        balance += amount;
        cout << "Deposit of $" << fixed << setprecision(2) << amount << " successful." << endl;
    }

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

    void calculateMonthlyInterest() {
        double monthlyInterest = (balance * interestRate) / 12.0;
        balance += monthlyInterest;
        cout << "Monthly interest of $" << fixed << setprecision(2) << monthlyInterest << " applied." << endl;
    }

    void displayAccountInfo() const {
        cout << "Current Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "Annual Interest Rate: " << fixed << setprecision(2) << interestRate * 100 << "%" << endl;
        cout << "Withdrawals this month: " << withdrawals << endl;
    }
};

int main() {
    SavingsAccount mySavings(1000.0, 0.04); 
    
    mySavings.displayAccountInfo();

    mySavings.deposit(250.0);
    mySavings.withdraw(100.0);
    mySavings.calculateMonthlyInterest();

    mySavings.displayAccountInfo();

    return 0;
}
