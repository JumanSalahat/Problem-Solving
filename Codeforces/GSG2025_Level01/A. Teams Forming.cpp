#include <bits/stdc++.h>
using namespace std;

int main() {
   short n; cin>>n;
   short a[n];
   for(short i=0;i<n;i++) cin>>a[i];
   sort(a,a+n);
   
   int sum=0;
   for(short i=1;i<n;i+=2) // n is even !
   {
       sum+=(a[i]-a[i-1]);
   }
   
   cout<<sum<<endl;
   return 0;
}
