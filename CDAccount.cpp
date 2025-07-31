#include <iostream>
#include <string>

class BankAccount {
protected:
    std::string accountNumber;
    std::string ownerName;
    double balance;

public:
    BankAccount(std::string accNum, std::string owner, double bal)
        : accountNumber(accNum), ownerName(owner), balance(bal) {}

    // Common methods for all bank accounts (deposit, withdraw, print details)
    virtual void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited " << amount << ". New balance: " << balance << std::endl;
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrew " << amount << ". New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    virtual void printDetails() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Owner Name: " << ownerName << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

class CDAccount : public BankAccount {
private:
    int maturityMonths;
    double interestRate; // Annual interest rate
    int currentCDMonth;

public:
    CDAccount(std::string accNum, std::string owner, double initialDeposit, int months, double rate)
        : BankAccount(accNum, owner, initialDeposit),
          maturityMonths(months),
          interestRate(rate),
          currentCDMonth(0) {}

    void advanceMonth() {
        currentCDMonth++;
        // Apply monthly interest
        balance += (balance * (interestRate / 12.0));
        std::cout << "Month " << currentCDMonth << " advanced. New balance: " << balance << std::endl;
    }

    void withdraw(double amount) override {
        if (currentCDMonth < maturityMonths) {
            std::cout << "Early withdrawal penalty applied." << std::endl;
            // Implement penalty logic here, e.g., reduce interest or a fixed fee
            double penalty = balance * 0.05; // Example penalty
            balance -= penalty;
            BankAccount::withdraw(amount); // Call base class withdraw after penalty
        } else {
            BankAccount::withdraw(amount); // No penalty if mature
        }
    }

    void printDetails() const override {
        BankAccount::printDetails();
        std::cout << "CD Maturity Months: " << maturityMonths << std::endl;
        std::cout << "Current CD Month: " << currentCDMonth << std::endl;
        std::cout << "Interest Rate: " << (interestRate * 100) << "%" << std::endl;
        if (currentCDMonth >= maturityMonths) {
            std::cout << "CD is mature." << std::endl;
        } else {
            std::cout << "Months until maturity: " << (maturityMonths - currentCDMonth) << std::endl;
        }
    }
};

// Example usage in main function
int main() {
    CDAccount myCD("CD12345", "Jane Doe", 10000.0, 12, 0.04); // 1-year CD, 4% interest
    myCD.printDetails();

    myCD.advanceMonth();
    myCD.advanceMonth();
    myCD.withdraw(500); // Early withdrawal

    for (int i = 0; i < 10; ++i) {
        myCD.advanceMonth();
    }
    myCD.withdraw(5000); // Withdrawal after maturity

    myCD.printDetails();

    return 0;
}