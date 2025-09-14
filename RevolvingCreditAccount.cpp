#include <iostream>
#include <iomanip> 

int main() {
    double accountBalance;
    double interestDue;
    double totalDue;
    double minimumPayment;

    std::cout << "Enter the account balance: $";
    std::cin >> accountBalance;

    if (accountBalance <= 1000) {
        interestDue = accountBalance * 0.015; 
    } else {
        interestDue = (1000 * 0.015) + ((accountBalance - 1000) * 0.01); 
    }

    totalDue = accountBalance + interestDue;

    if (totalDue < 10) {
        minimumPayment = totalDue; 
    } else {
        minimumPayment = totalDue * 0.10; 
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Interest Due: $" << interestDue << std::endl;
    std::cout << "Total Due: $" << totalDue << std::endl;
    std::cout << "Minimum Payment: $" << minimumPayment << std::endl;

    return 0;
}
