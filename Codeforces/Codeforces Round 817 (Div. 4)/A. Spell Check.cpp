#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        string s; cin>>s;
        sort(s.begin(),s.end()); // إإذا الكلمة صحيحة ، ترتيبها بكون --> Timru
        if(s=="Timru") cout<<"YES\n";
        else cout<<"NO\n";
    }
}
