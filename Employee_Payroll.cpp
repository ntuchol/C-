#include <string>

class Employee {
private:
    std::string name;
    double hourlyRate;
    double hoursWorked;

public:
    Employee(const std::string& n, double rate) : name(n), hourlyRate(rate), hoursWorked(0.0) {}

    void addHours(double hours) {
        hoursWorked += hours;
    }

    double calculateGrossPay() const {
        // Simple calculation, can be expanded for overtime, etc.
        return hoursWorked * hourlyRate;
    }

    // Additional functions for deductions, net pay, display, etc.
};