#include <iostream>
#include <string>
#include <vector>

// Function to get the grade point value for a letter grade
double getGradePoint(char letterGrade) {
    switch (toupper(letterGrade)) { // Convert to uppercase for case-insensitivity
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return -1.0; // Indicate an invalid grade
    }
}

int main() {
    std::string studentName;
    int numCourses;
    double totalQualityPoints = 0.0;
    double totalCredits = 0.0;

    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName); // Read full line for name

    std::cout << "Enter number of courses: ";
    std::cin >> numCourses;

    for (int i = 0; i < numCourses; ++i) {
        char grade;
        double credits;

        std::cout << "Enter letter grade for course " << i + 1 << ": ";
        std::cin >> grade;

        std::cout << "Enter credits for course " << i + 1 << ": ";
        std::cin >> credits;

        double gradePoint = getGradePoint(grade);

        if (gradePoint != -1.0) {
            totalQualityPoints += (gradePoint * credits);
            totalCredits += credits;
        } else {
            std::cout << "Invalid grade entered for course " << i + 1 << ". Skipping this course." << std::endl;
        }
    }

    if (totalCredits > 0) {
        double gpa = totalQualityPoints / totalCredits;
        std::cout << studentName << "'s GPA is: " << gpa << std::endl;
    } else {
        std::cout << "No valid courses entered to calculate GPA." << std::endl;
    }

    return 0;
}