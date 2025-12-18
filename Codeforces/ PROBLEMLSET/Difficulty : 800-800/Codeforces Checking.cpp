#include <bits/stdc++.h>
using namespace std;
int main()
{   string s="codeforces";
    int t; cin>>t;
    char c;
    
    while(t--)
    {
        bool f=false;
        cin>>c;
        
        for(int i=0;i<s.size();i++)
        {
           if(c==s[i]) { f=true; break; }
        }
        
        if(f==true) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}