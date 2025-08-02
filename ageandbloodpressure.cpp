#include <iostream>
#include <string>

using namespace std;

// Function to calculate age
void calculateAge(int current_day, int current_month, int current_year,
                  int birth_day, int birth_month, int birth_year) {
    // Logic for age calculation goes here (similar to search result)
    // ...
    cout << "You are [Calculated Years] years old." << endl; 
}

// Function to assess blood pressure and provide advice based on age
void assessBloodPressure(int systolic, int diastolic, int age) {
    // Reference a blood pressure chart based on age (e.g., search results)
    if (age >= 18 && age <= 40) {
        if (systolic < 120 && diastolic < 80) {
            cout << "Blood Pressure Category: Normal (Adult 19-40)" << endl;
        } else {
            // Further classification and advice for this age group
            // ... 
        }
    } else if (age > 40 && age <= 60) {
        if (systolic >= 110 && systolic <= 145 && diastolic >= 70 && diastolic <= 90) {
            cout << "Blood Pressure Category: Normal (Adult 41-60)" << endl;
        } else {
            // Further classification and advice for this age group
            // ...
        }
    }
    // ... Additional age group checks
}

int main() {
    // Get user input for birthdate and current date
    // ...

    calculateAge(current_day, current_month, current_year, birth_day, birth_month, birth_year); 

    // Get user input for blood pressure readings
    int systolic, diastolic;
    cout << "Enter systolic blood pressure (mm Hg): ";
    cin >> systolic;
    cout << "Enter diastolic blood pressure (mm Hg): ";
    cin >> diastolic;

    // Assuming you have the calculated age from calculateAge()
    int calculated_age = 30; // Replace with actual calculated age

    assessBloodPressure(systolic, diastolic, calculated_age);

    return 0;
}