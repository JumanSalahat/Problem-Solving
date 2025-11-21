#include <bits/stdc++.h>
using namespace std;
long long MinMax(int n,long long a[],long long &x,long long &y)
{
    x=1e5;
    y=0;
    for(int i=0;i<n;i++)
    {
        x=min(x,a[i]);
        y=max(y,a[i]);
    }
    return (x,y);
}

int main() {
    int n;
    long long x,y;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    MinMax(n,a,x,y);
    cout<<x<<" "<<y;
    return 0;
}
