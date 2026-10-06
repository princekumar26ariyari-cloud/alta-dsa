#include <iostream>
using namespace std;

int main() {
int n;
    cout<<"Enter your number";
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<"yes";
    }else{
        cout<<"not";
    }
    return 0;
}