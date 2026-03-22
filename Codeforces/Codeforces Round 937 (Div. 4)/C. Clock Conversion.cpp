#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        string h= "";
        h+=s[0];
        h+=s[1];
        
        int hours = stoi(h);
        int x;
        if( hours >= 12) 
        {
            if(hours==12) x=12;
            else x=hours-12;
            
            if(x<10)  cout<<'0'<<x<<':'<<s[3]<<s[4]<<" PM\n";
            else cout<<x<<':'<<s[3]<<s[4]<<" PM\n";
        }
            
        else 
        {
            if(hours==0) 
            {
                x=12;
                cout<<x<<':'<<s[3]<<s[4]<<" AM\n";
            }
            else cout<<s<<" AM\n";
        }
    }
}
