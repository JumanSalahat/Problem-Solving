#include <bits/stdc++.h>
using namespace std;

int main() {
   short n,k;
   cin>>n>>k;
   short count=0;
   while(n--)
   {
       string s;
       cin>>s;
       sort(s.begin(),s.end());
       short x=0;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==char('0'+x)) x++; // مهم جداً جداً --> s[i]==char('0'+x)
           if(x==k+1) break; // k+1 --> لإني بدي أتحقق من آخر قيمة لـ -> k -> هل موجودة أم لا
       }
       if(x==k+1) count++;
   }
   cout<<count<<endl;
}
