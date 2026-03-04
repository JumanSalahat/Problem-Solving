#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
            int x=a[i];
            for(int j=i+1;j<n;j++)
            {
                x=max({x,a[j]});
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
}
