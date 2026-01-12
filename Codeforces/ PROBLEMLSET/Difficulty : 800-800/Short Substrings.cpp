#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    string b; 
    while(t--)
    {
        cin>>b;
        string s="";
        for(int i=2;i<b.size();i++)
        {
            if(i%2 != 0) s+=b[i];
        }
        if(b.size()%2==0) cout<<b[0]<<b[1]<<s<<endl;
        else cout<<b[0]<<b[1]<<s<<b[b.size()-1]<<endl;
    }
 
    return 0;
}
