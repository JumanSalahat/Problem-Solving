#include <bits/stdc++.h>
using namespace std;

int main() {
   long long x,y,r,n;
   cin>>x>>y>>r>>n;
   while(n--)
   {
       int a,b;
       cin>>a>>b;
       long long d=pow((x-a),2)+pow((y-b),2);
       if(d<=pow(r,2)) cout<<"YES\n";
       else cout<<"NO\n";
   }
   return 0;
   
}
