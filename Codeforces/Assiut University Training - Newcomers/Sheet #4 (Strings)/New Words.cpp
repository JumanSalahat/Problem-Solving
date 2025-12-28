#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int count_e=0,count_g=0,count_y=0,count_p=0,count_t=0;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]=='e') count_e++;
        else if(s[i]=='g') count_g++;
        else if(s[i]=='y') count_y++;
        else if(s[i]=='p') count_p++;
        else if(s[i]=='t') count_t++;
    }
     int result = min({count_e,count_g,count_y,count_p,count_t}) ;
     cout<<result;
    return 0;
}
