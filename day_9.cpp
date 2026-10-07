#include <iostream>
using namespace std;

int main() {
    double weight, height;

    cout << "Enter weight (kg): ";
    cin >> weight;
    cout << "Enter height (m): ";
    cin >> height;

    if (weight <= 0 || height <= 0) {
        cout << "Weight and height must be positive values." << endl;
        return 1;
    }

    double bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 25) {
        if (bmi < 18.5) {
            cout << "Category: Underweight" << endl;
        } else {
            cout << "Category: Normal" << endl;
        }
    } else {
        if (bmi < 30) {
            cout << "Category: Overweight" << endl;
        } else {
            cout << "Category: Obese" << endl;
        }
    }

    return 0;
}