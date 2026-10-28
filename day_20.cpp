#include<iostream>
using namespace std;
 int main(){
    int N;
    cin>>N;
    for( int i=1; i<=N;i++){
        if (i%3 ==0 && i%5 ==0){
            cout<<"FIZZBUZZ"<<endl;
        }
        else if( i%5==0){
            cout<<"BUZZ"<<endl;
        }
        else if( i%3==0){
            cout<<"FIZZ"<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
 }