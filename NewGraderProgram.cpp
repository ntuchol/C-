

#include <iostream>
#include <fstream> 
#include <iomanip> 

int main() {
    std::ifstream inputFile("scores.txt"); 
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open scores.txt" << std::endl;
        return 1;
    }

    double score, total;
    inputFile >> score >> total; 
    inputFile.close();

    if (total <= 0) {
        std::cerr << "Error: Total score must be greater than zero." << std::endl;
        return 1;
    }

    double percentage = (score / total) * 100.0;

    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "Student Score: " << score << std::endl;
    std::cout << "Total Possible: " << total << std::endl;
    std::cout << "Percentage: " << percentage << "%" << std::endl;

    if (percentage >= 90) {
        std::cout << "Grade: A (Excellent)" << std::endl;
    } else if (percentage >= 80) {
        std::cout << "Grade: B (Well Done)" << std::endl;
    } else if (percentage >= 70) {
        std::cout << "Grade: C (Good)" << std::endl;
    } else if (percentage >= 60) {
        std::cout << "Grade: D (Need Improvement)" << std::endl;
    } else {
        std::cout << "Grade: F (Fail)" << std::endl;
    }

    return 0;
}
