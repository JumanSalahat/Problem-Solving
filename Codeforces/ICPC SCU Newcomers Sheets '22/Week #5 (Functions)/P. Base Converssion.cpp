#include <bits/stdc++.h>
using namespace std;

string Base_Converssion(int n)
{
    string s="";
    int x=n;
    while(n)
    {
        s+=to_string(x%2);
        x=n/2;
        n/=2;
    }
    
    reverse(s.begin(),s.end());
    return s;
}

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; 
        cin>>n;
        cout<<Base_Converssion(n)<<endl;
    }
    
    return 0;
}
