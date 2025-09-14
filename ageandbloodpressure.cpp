#include <iostream>
#include <string>

using namespace std;

void calculateAge(int current_day, int current_month, int current_year,
                  int birth_day, int birth_month, int birth_year) {
    cout << "You are [Calculated Years] years old." << endl; 
}

void assessBloodPressure(int systolic, int diastolic, int age) {
    if (age >= 18 && age <= 40) {
        if (systolic < 120 && diastolic < 80) {
            cout << "Blood Pressure Category: Normal (Adult 19-40)" << endl;
        } else {
        }
    } else if (age > 40 && age <= 60) {
        if (systolic >= 110 && systolic <= 145 && diastolic >= 70 && diastolic <= 90) {
            cout << "Blood Pressure Category: Normal (Adult 41-60)" << endl;
        } else {
        }
    }
}

int main() {

    calculateAge(current_day, current_month, current_year, birth_day, birth_month, birth_year); 

    int systolic, diastolic;
    cout << "Enter systolic blood pressure (mm Hg): ";
    cin >> systolic;
    cout << "Enter diastolic blood pressure (mm Hg): ";
    cin >> diastolic;

    int calculated_age = 30; 

    assessBloodPressure(systolic, diastolic, calculated_age);

    return 0;
}
