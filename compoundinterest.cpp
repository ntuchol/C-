#include <iostream>  // For input and output operations
#include <cmath>     // For the pow() function (to calculate exponents)

int main() {
    double principal, rate, time, compoundInterest, futureValue;
    int compoundingPeriods;

    // Input: Principal amount
    std::cout << "Enter the principal amount (P): ";
    std::cin >> principal;

    // Input: Annual interest rate (in percentage)
    std::cout << "Enter the annual interest rate (R, in %): ";
    std::cin >> rate;

    // Convert annual interest rate to decimal
    rate /= 100;

    // Input: Number of times interest is compounded per year
    std::cout << "Enter the number of times interest is compounded per year (n): ";
    std::cin >> compoundingPeriods;

    // Input: Time in years
    std::cout << "Enter the time in years (t): ";
    std::cin >> time;

    // Calculate the future value (A)
    futureValue = principal * pow((1 + rate / compoundingPeriods), (compoundingPeriods * time));

    // Calculate compound interest (CI)
    compoundInterest = futureValue - principal;

    // Output results
    std::cout << "\nPrincipal amount: $" << principal << std::endl;
    std::cout << "Annual interest rate: " << rate * 100 << "%" << std::endl;
    std::cout << "Compounding periods per year: " << compoundingPeriods << std::endl;
    std::cout << "Time (years): " << time << std::endl;
    std::cout << "Future value (A): $" << futureValue << std::endl;
    std::cout << "Compound interest (CI): $" << compoundInterest << std::endl;

    return 0;
}
