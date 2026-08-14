#include <bits/stdc++.h>
using namespace std;

// فكرته مُشابهة لفكرة سؤال --> A - Collecting Coins
// https://codeforces.com/contest/1294/problem/A
int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        int x = sum/3;
        if( ( (sum)%3 == 0 ) && ( x >= max({a,b})) ) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
