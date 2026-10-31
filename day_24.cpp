#include <iostream>
using namespace std;

// 1. Sum of two numbers
int sum(int a, int b) {
    return a + b;
}

// 2. Factorial
long long factorial(int n) {
    long long fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// 3. Prime check
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// 4. Largest of three numbers
int largest(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
}

// int main() {
//     int choice;

//     do {
//         cout << "1. Sum of two numbers" << endl;
//         cout << "2. Factorial" << endl;
//         cout << "3. Prime check" << endl;
//         cout << "4. Largest of three numbers" << endl;
//         cout << "5. Exit" << endl;

//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {

//             case 1: {
//                 int a, b;
//                 cout << "Enter two numbers: ";
//                 cin >> a >> b;

//                 cout << "Sum = " << sum(a, b) << endl;
//                 break;
//             }

//             case 2: {
//                 int n;
//                 cout << "Enter a number: ";
//                 cin >> n;

//                 if (n < 0 || n > 20) {
//                     cout << "Enter a number between 0 and 20." << endl;
//                 }
//                 else {
//                     cout << "Factorial = " << factorial(n) << endl;
//                 }
//                 break;
//             }

//             case 3: {
//                 int n;
//                 cout << "Enter a number: ";
//                 cin >> n;

//                 if (isPrime(n)) {
//                     cout << n << " is Prime." << endl;
//                 }
//                 else {
//                     cout << n << " is Not Prime." << endl;
//                 }
//                 break;
//             }

//             case 4: {
//                 int a, b, c;
//                 cout << "Enter three numbers: ";
//                 cin >> a >> b >> c;

//                 cout << "Largest = " << largest(a, b, c) << endl;
//                 break;
//             }

//             case 5:
//                 cout << "Program Exited!" << endl;
//                 break;

//             default:
//                 cout << "Invalid Choice! Try again." << endl;
//         }

//     } while (choice != 5);

//     return 0;
// }