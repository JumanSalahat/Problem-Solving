#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n,s,x; cin>>n>>s>>x;
        short a[n];
        short sum=0;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            sum+=a[i];
        }
        short y=s-sum;
        if(y>=0 && y%x == 0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
