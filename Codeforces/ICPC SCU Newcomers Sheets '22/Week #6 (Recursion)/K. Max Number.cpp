#include <bits/stdc++.h>
using namespace std;

int Max_Number(int n, int a[], int &x)
{
    if(n==0) return x; // Basw case
    x=max(x,a[n-1]);
    return Max_Number(n-1,a,x);
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int x=-1e9; // since ( -10^9 ≤ a[i] ≤ 10^9 )
    cout<<Max_Number(n,a,x)<<endl;
    return 0;
}
