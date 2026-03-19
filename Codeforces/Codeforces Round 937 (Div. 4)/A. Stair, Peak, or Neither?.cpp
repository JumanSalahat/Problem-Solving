#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR\n";
        else if(a<b && b>c) cout<<"PEAK\n";
        else cout<<"NONE\n";
    }
}
