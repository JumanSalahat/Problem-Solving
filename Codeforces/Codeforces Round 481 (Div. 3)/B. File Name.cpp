#include <bits/stdc++.h>
using namespace std;

int main() {
   short n; cin>>n;
   string s; cin>>s;
   int c=1;
   int ans=0;
   
   for(int i=1;i<n;i++)
   {
       if(s[i]=='x' && s[i-1]=='x') c++;
       else {
           if(c>=3) ans+=(c-2);
           c=1;
       }
   }
   
    // مهم جداً: نحسب آخر مجموعة
   if(c >= 3) 
       ans += (c - 2);
       
   cout<<ans<<endl;
   return 0;
   
}
