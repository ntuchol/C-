#include <string>
#include <vector>

class GradeBook {
public:
    GradeBook(std::string name);

    void setCourseName(std::string name);
    std::string getCourseName() const;
    void inputGrades();
    void displayGradeReport() const;
    double calculateAverage(const std::vector<double>& grades) const;
    char calculateLetterGrade(double average) const;

private:
    std::string courseName;
    std::vector<std::string> studentNames;
    std::vector<std::vector<double>> studentGrades; 
};
