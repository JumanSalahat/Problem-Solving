#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    int n; 
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x=1;
            a[i]++;
            for(int j=0;j<n;j++)
            x*=a[j];

            ans=max(ans,x);
            a[i]--;
        }
        cout<<ans<<endl;

    }
    return 0;
}
