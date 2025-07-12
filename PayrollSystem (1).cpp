#include <iostream>
#include <vector>
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

    double calculatePay() const {
        return hoursWorked * hourlyRate;
    }

    void displayPay() const {
        std::cout << "Pay for " << name << ": $" << calculatePay() << std::endl;
    }
};

int main() {
    std::vector<Employee> employees;
    employees.push_back(Employee("John Doe", 20.0));
    employees.push_back(Employee("Jane Smith", 25.0));

    employees[0].addHours(40);
    employees[1].addHours(35);

    for (const Employee &e : employees) {
        e.displayPay();
    }

    return 0;
}