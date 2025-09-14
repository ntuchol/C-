class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    BankAccount(const std::string& accNum, const std::string& holderName, double initialBalance) {
        accountNumber = accNum;
        accountHolderName = holderName;
        accountBalance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposit successful. Current balance: " << accountBalance << std::endl;
        } else {
            std::cout << "Invalid deposit amount." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawal successful. Current balance: " << accountBalance << std::endl;
        } else if (amount > accountBalance) {
            std::cout << "Insufficient balance. Cannot withdraw." << std::endl;
        } else {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
    }

    double getBalance() const {
        return accountBalance;
    }

    void displayAccountInfo() const {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Balance: " << accountBalance << std::endl;
    }

};
