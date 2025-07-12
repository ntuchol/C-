#include <iostream>
#include <iomanip> // Required for setprecision

using namespace std;

int main() {
    double weight, height, bmi;

    // Get weight in kilograms
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    // Get height in meters
    cout << "Enter your height in meters: ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Set precision for output
    cout << fixed << setprecision(2);

    // Display the result
    cout << "Your BMI is: " << bmi << endl;

    // (Optional) Display BMI category
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else if (bmi >= 18.5 && bmi < 25) {
        cout << "You are a healthy weight." << endl;
    } else if (bmi >= 25 && bmi < 30) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }

    return 0;
}