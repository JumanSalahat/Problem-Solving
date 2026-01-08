#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long x[4],y[4];
    long long a =-1e5;
    long long b =-1e5;
    long long d = 1e5;
    long long c = 1e5;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
        cin>>y[i];
        a=max(a,x[i]); // a = x_max
        b=max(b,y[i]); // b = y_max
        d=min(d,x[i]); // d = x_min
        c=min(c,y[i]); // c = y_min
    }
    int n; cin>>n;
    long long x_test , y_test ;
    while(n--)
    {
        cin>> x_test >> y_test ;
        if( ( x_test <= a && y_test <= b ) && ( x_test >= d && y_test >= c )) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
