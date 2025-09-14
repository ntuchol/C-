#include <iostream>
#include <string>
#include <vector> 
class Student {
private: 
    std::string name;
    int rollNumber;
    std::vector<int> marks; 
public: 
    Student(std::string n, int rn) : name(n), rollNumber(rn) {}

    void inputDetails() {
        std::cout << "Enter student name: ";
        std::getline(std::cin, name);
        std::cout << "Enter roll number: ";
        std::cin >> rollNumber;
        std::cin.ignore(); 
        
        int subjectMark;
        for (int i = 0; i < 3; ++i) {
            std::cout << "Enter mark for subject " << i + 1 << ": ";
            std::cin >> subjectMark;
            marks.push_back(subjectMark);
        }
        std::cin.ignore();
    }

    void displayDetails() const { 
        std::cout << "Name: " << name << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: ";
        for (int mark : marks) {
            std::cout << mark << " ";
        }
        std::cout << std::endl;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};
