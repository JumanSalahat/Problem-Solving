#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short a,b,c;
        cin>>a; short Max=a; short Min=a;
        cin>>b; Max=max(Max,b); Min=min(Min,b);
        cin>>c; Max=max(Max,c); Min=min(Min,c);
        cout<<a+b+c-Max-Min<<endl;
    }
    return 0;
}
