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
        return hoursWorked * hourlyRate;
    }

};
