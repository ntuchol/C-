#include <iostream>
#include <string> 

struct Student {
    std::string name;
    int rollNumber;
    float marks;
};

int main() {
    Student s1; 
    
    std::cout << "Enter student name: ";
    std::getline(std::cin, s1.name); 
    std::cout << "Enter roll number: ";
    std::cin >> s1.rollNumber;
    std::cout << "Enter marks: ";
    std::cin >> s1.marks;

    std::cout << "\nStudent Information:\n";
    std::cout << "Name: " << s1.name << std::endl;
    std::cout << "Roll Number: " << s1.rollNumber << std::endl;
    std::cout << "Marks: " << s1.marks << std::endl;

    return 0;
}
