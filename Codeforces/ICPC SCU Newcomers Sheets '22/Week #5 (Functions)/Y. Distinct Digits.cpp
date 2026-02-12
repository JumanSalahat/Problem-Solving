#include <bits/stdc++.h>
using namespace std;

string Distinct_Digits(int l, int r)
{
    for(int i=l;i<=r;i++)
    {
        set<char> x;
        string s = to_string(i);
        for(int j=0;j<s.size();j++)
        {
            x.insert(s[j]);
        }
        if(x.size() == s.size()) return s;
    }
    
    return "-1";
}
 
int main() {
   int l,r;
   cin>>l>>r;
   cout<<Distinct_Digits(l,r)<<endl;
   return 0;
}
