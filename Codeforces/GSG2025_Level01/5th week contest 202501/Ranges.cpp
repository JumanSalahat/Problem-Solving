#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int l,r;
    string s="";
    while(n--)
    {
        cin>>l>>r;
        for(int i=l;i<=r;i++) s+=i;
    }
    
    set<int> x;
    for(int i=0;i<s.size();i++)
    {
        x.insert(s[i]);
    }
    
    cout<<x.size();
    return 0;
}
