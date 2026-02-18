#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int a[n];
    cin>>a[0];
    
    int x=a[0]; int b=0; // قـيـم ابـتـدائـيّـة
    int y=a[0]; int c=0; // قـيـم ابـتـدائـيّـة
    
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        
        if(a[i]<x) b=i;
        x=min(x,a[i]);
        
        if(a[i]>y) c=i;
        y=max(y,a[i]);
    }
    
    swap(a[b],a[c]);
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
