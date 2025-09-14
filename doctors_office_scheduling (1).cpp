#include <iostream>
#include <vector>
#include <string>
#include <map> 

class Doctor {
public:
    std::string name;
    std::string specialization;
};

class Patient {
public:
    std::string name;
    std::string contactInfo;
};

class Appointment {
public:
    Doctor* doctor; 
    Patient* patient; 
    std::string date;
    std::string time;
};

int main() {
    std::vector<Doctor> doctors;
    std::vector<Patient> patients;
    std::vector<Appointment> appointments;


    return 0;
}
