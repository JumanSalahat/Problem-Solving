#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short a[3];
        for(short i=0;i<3;i++) cin>>a[i];
        sort(a,a+3);
        cout<<a[1]<<endl;
    }
    return 0;
}
