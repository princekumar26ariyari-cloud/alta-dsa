#include<iostream>
using namespace std;
int sum( int a, int b){
    return a+b;
}
float sum(float a, float b){
    return a+b;
}
int main(){
     cout<<"Sum of integers value = "<< sum(6,8)<<endl;
    cout<<" Sum of floating value = "<<sum(4.01f,5.98f)<<endl;
    return 0;
}