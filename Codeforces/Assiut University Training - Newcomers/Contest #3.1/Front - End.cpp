#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int y;
    if(n%2==0) y=n/2;
    else y=n/2 + 1;
    
    int x=n;
    for(int i=0;i<y;i++) 
    {
      if(n%2==1 && i==y-1) cout<<a[i];
      else cout<<a[i]<<" "<<a[x-1]<<" ";
      x--;
    }
    return 0;
}
