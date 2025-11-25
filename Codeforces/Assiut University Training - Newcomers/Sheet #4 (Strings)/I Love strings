#include <bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    while(n--)
    {
        string s,t,result="";
        cin>>s>>t;
        int x=max(s.size(),t.size());
        for(int i=0;i<x;i++)
        {
            if(i<s.size()) result+=s[i];
            if(i<t.size()) result+=t[i];
        }
            // Loop from 0 until max(|s|, |t|).
           // Since, At each i, we add s[i] if it exists and t[i] if it exists.
          // so every character is added exactly once and result length becomes |s| + |t|.
        cout<<result<<endl;
    }
    return 0;
}
