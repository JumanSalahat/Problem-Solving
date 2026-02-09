#include <bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0 && i != n) return false;
    }
    return true;
}

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(Prime(n) == false ) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0;
}
