#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    double salary;

public:
    // Constructor
    Employee(int id, std::string empName, double empSalary) {
        employeeID = id;
        name = empName;
        salary = empSalary;
    }

    // Member functions
    void displayDetails() {
        // Code to display employee details
    }

    double calculateYearlySalary() {
        // Code to calculate yearly salary
        return salary * 12;
    }
};