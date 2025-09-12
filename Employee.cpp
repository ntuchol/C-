#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    double salary;

public:
    Employee(int id, std::string empName, double empSalary) {
        employeeID = id;
        name = empName;
        salary = empSalary;
    }

    void displayDetails() {
    }

    double calculateYearlySalary() {
        return salary * 12;
    }
};
