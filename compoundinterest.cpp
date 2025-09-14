#include <iostream>  
#include <cmath>     

int main() {
    double principal, rate, time, compoundInterest, futureValue;
    int compoundingPeriods;

    std::cout << "Enter the principal amount (P): ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (R, in %): ";
    std::cin >> rate;

    rate /= 100;

    std::cout << "Enter the number of times interest is compounded per year (n): ";
    std::cin >> compoundingPeriods;

    std::cout << "Enter the time in years (t): ";
    std::cin >> time;

    futureValue = principal * pow((1 + rate / compoundingPeriods), (compoundingPeriods * time));

    compoundInterest = futureValue - principal;

    std::cout << "\nPrincipal amount: $" << principal << std::endl;
    std::cout << "Annual interest rate: " << rate * 100 << "%" << std::endl;
    std::cout << "Compounding periods per year: " << compoundingPeriods << std::endl;
    std::cout << "Time (years): " << time << std::endl;
    std::cout << "Future value (A): $" << futureValue << std::endl;
    std::cout << "Compound interest (CI): $" << compoundInterest << std::endl;

    return 0;
}
