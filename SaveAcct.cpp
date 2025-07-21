#include <fstream>
#include <string>
#include <iostream>

class BankAccount {
public:
    std::string accountNumber;
    double balance;

    BankAccount(std::string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    void saveToFile(const std::string& filename) {
        std::ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << accountNumber << std::endl;
            outFile << balance << std::endl;
            outFile.close();
            std::cout << "Account data saved to " << filename << std::endl;
        } else {
            std::cerr << "Error: Unable to open file for saving." << std::endl;
        }
    }

    void loadFromFile(const std::string& filename) {
        std::ifstream inFile(filename);
        if (inFile.is_open()) {
            std::getline(inFile, accountNumber);
            inFile >> balance;
            inFile.close();
            std::cout << "Account data loaded from " << filename << std::endl;
        } else {
            std::cerr << "Error: Unable to open file for loading." << std::endl;
        }
    }
};

int main() {
    BankAccount myAccount("123456789", 1000.50);
    myAccount.saveToFile("account_data.txt");

    BankAccount loadedAccount("", 0.0);
    loadedAccount.loadFromFile("account_data.txt");

    std::cout << "Loaded Account Number: " << loadedAccount.accountNumber << std::endl;
    std::cout << "Loaded Balance: " << loadedAccount.balance << std::endl;

    return 0;
}