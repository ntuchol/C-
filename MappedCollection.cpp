 #include <map>
    #include <string>
    #include <iostream>

    int main() {
        std::map<int, std::string> student_grades;
        student_grades[101] = "A";
        student_grades[102] = "B";
        student_grades.insert({103, "C"});

        std::cout << "Grade for student 101: " << student_grades[101] << std::endl;
        return 0;
    }