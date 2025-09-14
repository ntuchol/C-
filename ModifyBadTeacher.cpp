int badTeacherScore = 30; 
badTeacherScore = 90;    
#include <string>
#include <iostream>

int main() {
    std::string teacherName = "Mr. BadTeacher";
    teacherName[4] = 'G'; 
    std::cout << teacherName << std::endl; 

    teacherName.replace(4, 3, "Good"); 
    std::cout << teacherName << std::endl; 
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
    badTeacher.performanceRating = 2; 

    badTeacher.setPerformanceRating(9); 
    std::cout << badTeacher.performanceRating << std::endl;
    return 0;
}
