#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int t; cin>>t;
    string s;
    while(t--)
    {
       cin>>s;
       int result =s[0]-'0' + s[2]-'0';
       cout<<result<<endl;
    }
    
    return 0;
}
// note :  s[i] - '0' -> بتحوّل العدد المخزّن في -> string -> إلى -> int
// يعني الكومبايلر بصير يتعامل معه كإنّه -> integer