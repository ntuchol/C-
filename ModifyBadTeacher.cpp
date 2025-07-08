int badTeacherScore = 30; // Initial "bad" score
badTeacherScore = 90;    // Modify to a "good" score

#include <string>
#include <iostream>

int main() {
    std::string teacherName = "Mr. BadTeacher";
    teacherName[4] = 'G'; // Change 'B' to 'G'
    std::cout << teacherName << std::endl; // Output: Mr. GadTeacher

    teacherName.replace(4, 3, "Good"); // Replace "Bad" with "Good"
    std::cout << teacherName << std::endl; // Output: Mr. GoodTeacher
    return 0;
}

class Teacher {
public:
    std::string name;
    int performanceRating;

    void setPerformanceRating(int rating) {
        performanceRating = rating;
    }
};

int main() {
    Teacher badTeacher;
    badTeacher.name = "Mr. Snarky";
    badTeacher.performanceRating = 2; // Initial "bad" rating

    badTeacher.setPerformanceRating(9); // Modify using a setter
    std::cout << badTeacher.performanceRating << std::endl; // Output: 9
    return 0;
}