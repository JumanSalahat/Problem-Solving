#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        
        // بدنا نقسّم الأعداد لأزواج بحيث أكبر فرق بينهم يكون أصغر ما يمكن 
        int ans=0;
        for(int i=0;i<n;i+=2) 
        {
            ans = max (ans, abs(a[i] - a[i+1]));
        }
        
        cout<<ans<<endl;
    }
}
