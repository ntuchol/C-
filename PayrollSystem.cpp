#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(const std::string &n, double rate) : name(n), hourlyRate(rate), hoursWorked(0.0) {}

    void addHours(double hours) {
        hoursWorked += hours;
    }

    double calculateGrossPay() const {
        return hoursWorked * hourlyRate;
    }

    double calculateNetPay() const {
        double grossPay = calculateGrossPay();
        double taxDeduction = grossPay * 0.15; 
        return grossPay - taxDeduction;
    }

    void displayPayrollInfo() const {
        std::cout << "Employee: " << name << std::endl;
        std::cout << "Hours Worked: " << hoursWorked << std::endl;
        std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
        std::cout << "Gross Pay: $" << calculateGrossPay() << std::endl;
        std::cout << "Net Pay: $" << calculateNetPay() << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
};

// and offering menu-driven options for various payroll operations.
