#include <bits/stdc++.h>
using namespace std;

void Print_Even_Indices(int n, int a[])
{
    if(n == 0) return;
    if((n-1)%2==0) cout<<a[n-1]<<" ";
    Print_Even_Indices(n-1,a);
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    Print_Even_Indices(n,a);
    cout<<endl;
    return 0;
}
