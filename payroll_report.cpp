#include <iostream>
#include <iomanip>
#include <vector> 

struct Employee {
    int employeeID;
    std::string name;
    double hoursWorked;
    double hourlyRate;
};

int main() {
    std::vector<Employee> employees; 
    std::cout << "Enter employee data (enter 0 for Employee ID to stop):" << std::endl;
    int currentID = 1;
    while (true) {
        Employee currentEmployee;
        std::cout << "Employee ID (0 to exit): ";
        std::cin >> currentID;
        if (currentID == 0) {
            break;
        }
        currentEmployee.employeeID = currentID;

        std::cout << "Name: ";
        std::cin.ignore(); 
        std::getline(std::cin, currentEmployee.name);

        std::cout << "Hours worked: ";
        std::cin >> currentEmployee.hoursWorked;

        std::cout << "Hourly rate: ";
        std::cin >> currentEmployee.hourlyRate;

        employees.push_back(currentEmployee);
        std::cout << std::endl;
    }

    std::cout << "\n--- Payroll Report ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2); 

    double totalGrossPay = 0.0;
    double totalNetPay = 0.0;

    for (const Employee& emp : employees) {
        double grossPay = emp.hoursWorked * emp.hourlyRate;

        double federalTax = grossPay * 0.15; 
        double stateTax = grossPay * 0.05;   
        double ficaTax = grossPay * 0.062;   
        double totalDeductions = federalTax + stateTax + ficaTax;

        double netPay = grossPay - totalDeductions;

        std::cout << "Employee ID: " << emp.employeeID << std::endl;
        std::cout << "Name: " << emp.name << std::endl;
        std::cout << "Gross Pay: $" << grossPay << std::endl;
        std::cout << "Federal Tax: $" << federalTax << std::endl;
        std::cout << "State Tax: $" << stateTax << std::endl;
        std::cout << "FICA Tax: $" << ficaTax << std::endl;
        std::cout << "Net Pay: $" << netPay << std::endl;
        std::cout << "--------------------" << std::endl;

        totalGrossPay += grossPay;
        totalNetPay += netPay;
    }

    std::cout << "\n--- Summary ---" << std::endl;
    std::cout << "Total Gross Pay: $" << totalGrossPay << std::endl;
    std::cout << "Total Net Pay: $" << totalNetPay << std::endl;

    return 0;
}
