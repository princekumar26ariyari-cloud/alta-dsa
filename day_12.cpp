
#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month number: ";
    cin >> month;

    switch (month) {
        case 1:
        case 2:
        case 12:
            cout << "Winter";
            break;

        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Summer";
            break;

        case 7:
        case 8:
        case 9:
            cout << "Monsoon";
            break;

        case 10:
        case 11:
            cout << "Autumn";
            break;

        default:
            cout << "Invalid Month";
    }

    return 0;
}
