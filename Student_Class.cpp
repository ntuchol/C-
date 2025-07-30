#include <iostream>
#include <string>
#include <vector> // For storing marks

class Student {
private: // Private attributes for data encapsulation
    std::string name;
    int rollNumber;
    std::vector<int> marks; // Example: marks in multiple subjects

public: // Public methods to interact with the object
    // Constructor (optional, but good practice)
    Student(std::string n, int rn) : name(n), rollNumber(rn) {}

    void inputDetails() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); // Consume the newline character

        // Example: Input marks for 3 subjects
        int subjectMark;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Enter mark for subject " << i + 1 << ": ";
            std::cin >> subjectMark;
            marks.push_back(subjectMark);
        }
        std::cin.ignore();
    }

    void displayDetails() const { // const indicates the method does not modify object state
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: ";
        for (int mark : marks) {
            std::cout << mark << " ";
        }
        std::cout << std::endl;
    }

    // Example of a getter method
    int getRollNumber() const {
        return rollNumber;
    }
};