
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers and operator: ";
    cin >> a >> b >> op;

    switch (op) {
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;

        case '/':
            if (b != 0)
                cout << a / b;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}
