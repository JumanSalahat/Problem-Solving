#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    long long b,w;
    while(t--)
    {
        cin>>w>>b;
        long long k_max = ( -1 + sqrt( 1 + 8*(b+w) ) ) / 2; // أكبر قيمة ممكن
        // since : w+b ≥ k(k+1)​/2
        cout<<k_max<<endl;

    }
    return 0;
}
