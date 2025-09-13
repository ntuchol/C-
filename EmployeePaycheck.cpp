#include <iostream>
#include <string>
#include <iomanip> 
struct Employee {
    std::string name;
    double hourlyRate;
    double hoursWorked;
    double grossPay;
};

void calculateGrossPay(Employee& emp) {
    if (emp.hoursWorked <= 40) {
        emp.grossPay = emp.hourlyRate * emp.hoursWorked;
    } else {
        double regularHours = 40;
        double overtimeHours = emp.hoursWorked - 40;
        emp.grossPay = (emp.hourlyRate * regularHours) + (1.5 * emp.hourlyRate * overtimeHours);
    }
}

void displayEmployeePay(const Employee& emp) {
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Employee: " << emp.name << std::endl;
    std::cout << "Hourly Rate: $" << emp.hourlyRate << std::endl;
    std::cout << "Hours Worked: " << emp.hoursWorked << std::endl;
    std::cout << "Gross Pay: $" << emp.grossPay << std::endl << std::endl;
}

int main() {
    Employee emp1;

    std::cout << "Enter employee name: ";
    std::getline(std::cin, emp1.name); 

    std::cout << "Enter hourly rate: $";
    std::cin >> emp1.hourlyRate;

    std::cout << "Enter hours worked: ";
    std::cin >> emp1.hoursWorked;

    calculateGrossPay(emp1);
    displayEmployeePay(emp1);

    return 0;
}
