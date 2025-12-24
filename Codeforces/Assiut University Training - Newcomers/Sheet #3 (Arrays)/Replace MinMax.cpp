#include <bits/stdc++.h> 
using namespace std;
int main() { 
    int n;
    cin>>n;
    long long a[n];
    long long x=-1e5;
    long long y=1e5;
    long long A,B;
    
    for(int i=0 ; i<n;i++) 
    { 
        cin>>a[i];
        
        if(a[i]>x) A=i; 
        x=max(x,a[i]);
        
        if(a[i]<y) B=i;
        y=min(y,a[i]);
    } 
    
    long long z;
    z=a[A];
    a[A]=a[B];
    a[B]=z;
    for(int i=0;i<n;i++) cout<<a[i]<<" "; 
    return 0; 
}
