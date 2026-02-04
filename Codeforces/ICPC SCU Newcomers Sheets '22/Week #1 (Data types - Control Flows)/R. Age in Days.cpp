#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x=n/365; // years
    n=n%365;
    
    int y=n/30; // months
    n=n%30;
    
    int z=n; // days
    
    //print
    cout<<x<<" years\n";
    cout<<y<<" months\n";
    cout<<z<<" days\n";
    
    return 0;
}
