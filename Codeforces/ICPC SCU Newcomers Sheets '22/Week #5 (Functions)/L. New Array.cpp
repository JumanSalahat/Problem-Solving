#include <iostream>
using namespace std;

void NewArray(int n, int a[], int b[])
{
    int c[2*n];
    for(int i=0;i<n;i++) c[i] = b[i];
    
    int x=0;
    for(int i=n;i<2*n;i++) { c[i] = a[x]; x++; }
    
    for(int i=0;i<2*n;i++) cout<<c[i]<<" ";
}

int main() {
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    NewArray(n,a,b);
    cout<<endl;
    
    return 0;
}
