#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        string s; cin>>s;
        sort(s.begin(),s.end());
        cout<<int(s[n-1])-96<<endl;
    }
    return 0;
}
