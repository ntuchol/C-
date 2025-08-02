#include <iostream>
#include <iomanip> // For formatted output
#include <vector>  // To store multiple employees

// Structure to hold employee information
struct Employee {
    int employeeID;
    std::string name;
    double hoursWorked;
    double hourlyRate;
    // Potentially other fields for taxes, deductions, etc.
};

int main() {
    std::vector<Employee> employees; // Store employee data

    // --- Data Input (Loop for multiple employees) ---
    // In a real system, this might come from a file or database
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
        std::cin.ignore(); // Consume the newline character from previous input
        std::getline(std::cin, currentEmployee.name);

        std::cout << "Hours worked: ";
        std::cin >> currentEmployee.hoursWorked;

        std::cout << "Hourly rate: ";
        std::cin >> currentEmployee.hourlyRate;

        employees.push_back(currentEmployee);
        std::cout << std::endl;
    }

    // --- Payroll Calculation and Report Generation ---
    std::cout << "\n--- Payroll Report ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2); // Format output to two decimal places

    double totalGrossPay = 0.0;
    double totalNetPay = 0.0;
    // ... other totals

    for (const Employee& emp : employees) {
        // Calculate gross pay (simplified, no overtime for this example)
        double grossPay = emp.hoursWorked * emp.hourlyRate;

        // Calculate deductions (simplified, assuming a fixed percentage)
        double federalTax = grossPay * 0.15; // Example federal tax rate
        double stateTax = grossPay * 0.05;   // Example state tax rate
        double ficaTax = grossPay * 0.062;   // Example FICA tax rate
        double totalDeductions = federalTax + stateTax + ficaTax;

        // Calculate net pay
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