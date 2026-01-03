// حل آخر
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    cin>>n>>k;
    k--; // هون التغيير ، مع الاحتفاظ بأن تتم الإضافة من إنديكس 0 على المصفوفة
    
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i]; 
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[k] && a[i]>0) c++;
    }
    cout<<c;
    return 0;
}
