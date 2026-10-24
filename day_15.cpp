#include<iostream>
using namespace std;
int main(){
    int N;
    cout<<"ENter your number : ";
    cin>>N;
   
    bool isprime=true;
     if(N<2){
      isprime=false;
    }
    for( int i=2; i<N; i++){
        if(N%i==0){
            isprime=false;
            break;
        }
    
    }
    if(isprime){
        cout<<"prime number"<<endl;
    } else{
        cout<<"not prime";
    }
}
