#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    long long a = x2-x1;
    long long b = y2 - y1;
    long long c = a*a + b*b;
    double ans = sqrt(c);
    cout<<fixed << setprecision(6)<<ans; //مهم 
    return 0;
}
