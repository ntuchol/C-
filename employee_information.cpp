#include <string> // Required for std::string

class Employee {
public:
    int employeeID;
    std::string firstName;
    std::string lastName;
    double salary;
    std::string department;

    // Optional: Constructor to initialize data
    Employee(int id, const std::string& fName, const std::string& lName, double sal, const std::string& dept)
        : employeeID(id), firstName(fName), lastName(lName), salary(sal), department(dept) {}

    // Optional: Member functions to display employee information
    void displayInfo() {
        // Code to print employee details
    }
};