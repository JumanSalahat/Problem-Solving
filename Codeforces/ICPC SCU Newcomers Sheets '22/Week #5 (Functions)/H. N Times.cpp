#include <bits/stdc++.h>
using namespace std;

void N_time(int n, char c)
{
    for(int i=1;i<=n;i++)
    {
        cout<<c;
        if(i != n) cout<<" ";
    }
    
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        char c; cin>>c;
        N_time(n,c);
    }
    
    return 0;
}
