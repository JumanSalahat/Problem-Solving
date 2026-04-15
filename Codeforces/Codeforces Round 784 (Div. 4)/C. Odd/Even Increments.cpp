#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        int even_index_parity = a[0]%2;
        int odd_index_parity = a[1]%2;

         bool OK=true;
        for(int i=0;i<n;i++)
        {
            if(i%2==0 && a[i]%2 != even_index_parity) 
            {
                OK=false;
                break;
            }

            else if(i&2!=0 && a[i]%2 != odd_index_parity)
            {
                OK=false;
                break;
            }
        }

        if(OK) cout<<"YES\n"; // if OK=true
        else cout<<"NO\n";
        
    }
    return 0;
}
