#include <iostream>
#include <string> // For std::string

struct Student {
    std::string name;
    int rollNumber;
    float marks;
};

int main() {
    Student s1; // Create a Student variable

    // Get input from the user
    std::cout << "Enter student name: ";
    std::getline(std::cin, s1.name); // Use getline for names with spaces
    std::cout << "Enter roll number: ";
    std::cin >> s1.rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> s1.marks;

    // Display the stored information
    std::cout << "\nStudent Information:\n";
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll Number: " << s1.rollNumber << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;

    return 0;
}
