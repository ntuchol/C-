#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    cout << "Enter your height in meters: ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2);

    cout << "Your BMI is: " << bmi << endl;

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
