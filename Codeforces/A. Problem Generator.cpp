#include <iostream>
using namespace std;

int main()
{
    short t; cin>>t;
    while(t--)
    {
        short n,m;
        cin>>n>>m;
        char a[n];
        for (short i=0;i<n;i++) cin>>a[i];
        
        short freq[7]={0};
        for (short i=0;i<n;i++)
        {
            freq[a[i]-'A']++;
        }
        
        int ans=0;
        for (short i=0;i<7;i++)
        {
            if(freq[i] < m) ans+=m-freq[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
