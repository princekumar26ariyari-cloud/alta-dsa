#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number";
    cin>>num;
     int real=num;
    int remainder=0;
    int rev=0;
    while(num>0){
       remainder = num%10;
       rev=rev*10+remainder;
       num=num/10;
    }
    if(rev==real){
     cout<<"pallindrom";
    }
    else{
        cout<<"Not a  pallindrom";
    }
    return 0;
}

