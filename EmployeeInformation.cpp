class Employee {
private:
    int employeeID;
    std::string name;
    double salary;
    std::string department;

public:
    // Constructor
    Employee(int id, const std::string& n, double s, const std::string& d) :
        employeeID(id), name(n), salary(s), department(d) {}

    // Accessor (getter) functions
    int getEmployeeID() const { return employeeID; }
    std::string getName() const { return name; }
    double getSalary() const { return salary; }
    std::string getDepartment() const { return department; }

    // Mutator (setter) functions
    void setSalary(double newSalary) {
        if (newSalary >= 0) { // Input validation
            salary = newSalary;
        }
    }

    void displayDetails() const {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
        std::cout << "Department: " << department << std::endl;
    }
};