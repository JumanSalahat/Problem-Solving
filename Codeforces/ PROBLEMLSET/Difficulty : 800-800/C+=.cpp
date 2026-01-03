#include <bits/stdc++.h>
using namespace std;
int main()
{   int t; cin>>t;
    while(t--)
    {
        long long a,b,n;
        cin>>a>>b>>n;
        long long x;
        int c=0;
        while(a<=n && b<=n)
        {
           x=min(a,b);
           if(x==a) a+=b;
           else b+=a;
           c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}
