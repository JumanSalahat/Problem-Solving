#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int c=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1]) c++;
        }
        if(c>0) cout<<1<<endl;
        else cout<<s.size()<<endl;
    }    
    return 0;
}
