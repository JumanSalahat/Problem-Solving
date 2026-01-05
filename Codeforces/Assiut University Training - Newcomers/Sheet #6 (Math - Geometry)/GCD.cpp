#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long a,b;
    cin>>a>>b;
    long long x=gcd(a,b);
    long long y=lcm(a,b);
    cout<<x<<" "<<y;
    return 0;
}
