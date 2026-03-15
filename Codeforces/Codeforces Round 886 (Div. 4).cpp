#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10 || a+c>=10 || b+c >=10) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
