#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        string s;
        int freq[26]={0};
       for(int i=1;i<=n;i++)
       {
           cin>>s;
           for(int i=0;i<s.size();i++) freq[s[i]-'a']++;
       }
       
       bool ok=true;
       for(int i=0;i<26;i++)
       {
           if(freq[i] != 0) 
           {
               if(freq[i]%n != 0)  { ok=false; break; }
           }
       }
       if(ok==true) cout<<"YES\n";
       else cout<<"NO\n";
       
    }
}
