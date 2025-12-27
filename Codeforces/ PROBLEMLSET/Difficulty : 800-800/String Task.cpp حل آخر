// حل آخر ، نفس الفكرة ولكن أرتب
#include <bits/stdc++.h>
using namespace std;
int main()
{   string s,result="";
    cin>>s;
    
    for(int i=0;i<s.size();i++)
    {
           if(s[i]>='A' && s[i]<='Z')
               s[i]=tolower(s[i]);
    }
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i] !='e' && s[i] !='u' && s[i] !='i')
        {
           result+='.';
           result+=s[i];
        }
    }
    cout<<result;
    return 0;
}    
