#include <bits/stdc++.h>
using namespace std;
void Log2 (long long n, long long &c)
{
    if(n<=1) return; // Base case
    c++;
    Log2(n/2,c);
}
int main()
{
    long long n,c=0;
    cin>>n;
    Log2(n,c);
    cout<<c;

    return 0;
}
