#include <iostream>

using namespace std;

int main() {
    float income;
    float taxRate;
    float calculatedTax;

    cout << "Enter annual income: ";
    cin >> income;

    if (income <= 20000) {
        taxRate = 0.10;
    } else if (income <= 50000) {
        taxRate = 0.20;
    } else { // For incomes greater than 50000
        taxRate = 0.30;
    }

    calculatedTax = income * taxRate;

    cout << "Calculated tax: " << calculatedTax << endl;

    return 0;
}