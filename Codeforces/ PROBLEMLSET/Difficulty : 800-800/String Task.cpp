#include <bits/stdc++.h>
using namespace std;
int main()
{   string s,result="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='A' && s[i]!='o' && s[i]!='O' && s[i]!='y' && s[i] !='Y' && s[i] !='e' && s[i]!='E' && s[i] !='u' && s[i] !='U' && s[i] !='i' && s[i] !='I' )
        {
           result+='.';
           if(s[i]>'A' && s[i]<='Z')
           {
               s[i]=tolower(s[i]);
               result+=s[i];
           }
           else result+=s[i];
        }
    }
    cout<<result;
    return 0;
}    
