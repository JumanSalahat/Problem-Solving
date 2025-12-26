#include <bits/stdc++.h>
using namespace std;
int main()
{   
   int n;
   cin>>n;
   double x=log2(n);
   if(x-int(x)==0) cout<<"YES";
   else cout<<"NO";
   return 0;
}
