#include <bits/stdc++.h>
using namespace std;

int main() {
   string s;
   cin>>s;
   string result="";
   for(int i=0;i<s.size();i++)
   {
       if(result=="" && s[i]=='h') result+=s[i];
       else if(result=="h" && s[i]=='e') result+=s[i];
       else if(result=="he" && s[i]=='l') result+=s[i];
       else if(result=="hel" && s[i]=='l') result+=s[i];
       else if(result=="hell" && s[i]=='o') result+=s[i];
   }
   if(result=="hello") cout<<"YES";
   else cout<<"NO";
    return 0;
}
