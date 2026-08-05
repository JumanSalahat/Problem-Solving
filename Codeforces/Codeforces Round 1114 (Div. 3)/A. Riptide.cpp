#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t; cin>>t;
    while(t--)
    {
        int a[3];
        cin>>a[0]>>a[1]>>a[2];
        int ans=0;
        while(a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) // مهم جداً ، انتباه للشرط
        {
            sort(a,a+3);
            a[0]++;// الأصغر
            a[2]++;// الأكبر
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
