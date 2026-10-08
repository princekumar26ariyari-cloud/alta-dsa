#include <iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter your day :";
    cin>>day;
int month;
    cout<<"Enter your month :";
cin>>month;
int year;
    cout<<"Enter your year :";
cin>>year;
    

    if (month < 1 || month > 12) {
        cout << "Invalid Date";
    }
    else {
        int maxDays;

        if (month == 2) {
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                maxDays = 29;
            else
                maxDays = 28;
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        }
        else {
            maxDays = 31;
        }

        if (day >= 1 && day <= maxDays)
            cout << "Valid Date";
        else
            cout << "Invalid Date";
    }

    return 0;
}