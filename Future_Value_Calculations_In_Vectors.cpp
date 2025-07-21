#include <iostream>
#include <vector>
#include <cmath> // For std::pow

// Function to calculate future value
double calculateFutureValue(double presentValue, double interestRate, int periods) {
    return presentValue * std::pow(1 + interestRate, periods);
}

int main() {
    double initialInvestment = 1000.0; // Present Value
    double annualInterestRate = 0.05; // 5% annual interest rate
    int numberOfYears = 5;

    std::vector<double> futureValues;

    // Calculate future value for each year and store in the vector
    for (int year = 1; year <= numberOfYears; ++year) {
        double fv = calculateFutureValue(initialInvestment, annualInterestRate, year);
        futureValues.push_back(fv);
    }

    // Display the stored future values
    std::cout << "Future Values over " << numberOfYears << " years:" << std::endl;
    for (size_t i = 0; i < futureValues.size(); ++i) {
        std::cout << "Year " << (i + 1) << ": " << futureValues[i] << std::endl;
    }

    return 0;
}