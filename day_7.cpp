#include<iostream>
using namespace std;
int main (){
int year;
cout<<"Enter your year : ";
cin>>year;
if( year%4==0 &&year%100!=0 || (year%400==0)){
    cout<<"leap year "<<endl;
}
else{
    cout<<"not a leap year"<<endl;
}

  return 0;  
}