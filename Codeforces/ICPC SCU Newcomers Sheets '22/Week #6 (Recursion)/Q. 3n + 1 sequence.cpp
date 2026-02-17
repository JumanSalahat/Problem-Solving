#include <bits/stdc++.h>
using namespace std;

long long sequenc(int &n, int &c) 
{
    if(n==1)  return c;
    if(n%2==1) { n=3*n+1; c++; }
    else { n=n/2; c++; }
    return sequenc(n,c);
}

int main() {
   int n; cin>>n;
   int c=1; // 1 لإنه كمان قيمة -> n -> المُدخلة .. بنحسبها
   cout<<sequenc(n,c)<<endl;
   return 0;
}
