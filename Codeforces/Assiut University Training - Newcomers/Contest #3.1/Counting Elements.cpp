#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    int x;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=x;
    }
    
    sort(a,a+n);
    int c=1,result=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1]) c++;
        else if(a[i]+1==a[i+1]) { result+=c; c=1; }
        else c=1; // انتباااه !
    }
    
    cout<<result;
    return 0;
}
