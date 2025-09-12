#include <iostream>
#include <vector>
#include <cmath> 

double calculateFutureValue(double presentValue, double interestRate, int periods) {
    return presentValue * std::pow(1 + interestRate, periods);
}

int main() {
    double initialInvestment = 1000.0; 
    double annualInterestRate = 0.05; 
    int numberOfYears = 5;

    std::vector<double> futureValues;

    for (int year = 1; year <= numberOfYears; ++year) {
        double fv = calculateFutureValue(initialInvestment, annualInterestRate, year);
        futureValues.push_back(fv);
    }

    std::cout << "Future Values over " << numberOfYears << " years:" << std::endl;
    for (size_t i = 0; i < futureValues.size(); ++i) {
        std::cout << "Year " << (i + 1) << ": " << futureValues[i] << std::endl;
    }

    return 0;
}
