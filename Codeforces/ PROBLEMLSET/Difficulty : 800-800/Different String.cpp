#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        string s; cin>>s;
        set<char>x;
        for(int i=0;i<s.size();i++) x.insert(s[i]);
        if(x.size()==1) cout<<"NO\n";
        else 
        {
            string r=s;
            sort(r.begin(),r.end());
            if(r==s)
            { 
                reverse(r.begin(),r.end());
                if(s==r) swap(r[0],r[1]);
            }
            cout<<"YES\n"<<r<<endl;
        }
    }
}
