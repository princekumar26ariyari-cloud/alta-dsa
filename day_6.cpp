#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout<<"enter a : ";
    cin >> a;
    cout<<"enter b : ";
    cin>>b;
    cout<<"enter c : ";
    cin>>c;

    if (a >= b) {
        if (a >= c)
            cout << a;
        else
            cout << c;
    }
    else {
        if (b >= c)
            cout << b;
        else
            cout << c;
    }

    return 0;
}