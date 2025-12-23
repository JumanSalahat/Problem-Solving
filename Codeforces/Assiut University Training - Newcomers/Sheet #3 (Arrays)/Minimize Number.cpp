#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) { cin>>a[i]; }
  
    int c=0; int ans=1e9;
    for(int i=0;i<n;i++)
    {
        c=0;
        while (a[i] %2 ==0)
        {
            a[i]/=2;
            c++;
        }
        ans=min(ans,c);
    }
    cout<<ans;
    return 0;
}
