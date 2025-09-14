#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double income;
    double tax = 0.0;

    cout << "Enter your annual income: ";
    cin >> income;

    const int numBrackets = 4;
    double brackets[numBrackets] = {10000, 40000, 80000, 150000};
    double rates[numBrackets] = {0.10, 0.15, 0.25, 0.30};

    for (int i = 0; i < numBrackets; ++i) {
        if (income > brackets[i]) {
            double taxableAmount;
            if (i == 0) {
                taxableAmount = min(income, brackets[i]);
            } else {
                taxableAmount = min(income - brackets[i-1], brackets[i] - brackets[i-1]);
            }
            tax += taxableAmount * rates[i];
        } else {
            if(i > 0){
                if(income > brackets[i-1]){
                     tax += (income - brackets[i-1]) * rates[i];
                }
            }
            break;
        }
    }

    if(income > brackets[numBrackets - 1]){
        tax += (income - brackets[numBrackets - 1]) * rates[numBrackets - 1];
    }


    cout << fixed << setprecision(2);
    cout << "Your total tax is: $" << tax << endl;

    return 0;
}
