#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        if(s[0]=='a' && s[2]=='c') { cout<<"YES\n"; continue; }
        else {
            string x=s,y=s,z=s;
            swap(x[0],x[1]);
            if(x=="abc") { cout<<"YES\n"; continue; }
            
            swap(y[0],y[2]);
            if(y=="abc") { cout<<"YES\n"; continue; }
            
            swap(z[1],z[2]);
            if(z=="abc") { cout<<"YES\n"; continue; }
         }
         cout<<"NO\n";
    }
}
