#include <bits/stdc++.h>
using namespace std;
void NewArray(long long n,long long a[],long long b[],long long c[])
{
    long long i;
    for(i=0;i<n;i++) c[i]=b[i]; 
    for(i=0;i<n;i++) c[i+n]=a[i];
}
int main() {
    long long n,i;
    cin>>n;
    long long a[n],b[n],c[2*n];
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) cin>>b[i];
    
    //استدعاء الفنكشن
    NewArray(n,a,b,c);
    
    // طباعة c
    for(i=0;i<2*n;i++) cout<<c[i]<<" ";
    return 0;
}
