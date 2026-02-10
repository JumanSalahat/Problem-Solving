#include <bits/stdc++.h>
using namespace std;

int Distinct_Numbers(int n,int a[])
{
    set<int> s;
    for(int i=0;i<n;i++) s.insert(a[i]);
    
    return s.size();
}

int main() {
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   cout<<Distinct_Numbers(n,a)<<endl;
   return 0;
}
