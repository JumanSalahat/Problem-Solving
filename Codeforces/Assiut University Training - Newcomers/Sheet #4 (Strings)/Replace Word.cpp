#include <iostream>
using namespace std;

int main() {
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G' && s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T')
        { ans+=' '; i+=4; }

         else ans+=s[i];
    }
    cout<<ans<<endl;
}
