
#include <iostream>
using namespace std;

int main() {
    int days=7305;
    cout <<"Enter your days";
    cin>>days;

    int years=days/365;
    int remdays=days%365;

    cout<<years<<"years,";
    cout<<days<<"days";
    return 0;
}
