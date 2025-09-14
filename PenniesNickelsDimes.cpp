#include <iostream>
#include <iomanip> 

int main() {
    int numPennies = 10;
    int numNickels = 5;
    int numDimes = 3;
    int numQuarters = 2;

    const double PENNY_VALUE = 0.01;
    const double NICKEL_VALUE = 0.05;
    const double DIME_VALUE = 0.10;
    const double QUARTER_VALUE = 0.25;

    double totalAmount = (numPennies * PENNY_VALUE) +
                         (numNickels * NICKEL_VALUE) +
                         (numDimes * DIME_VALUE) +
                         (numQuarters * QUARTER_VALUE);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total amount: $" << totalAmount << std::endl;

    return 0;
}
