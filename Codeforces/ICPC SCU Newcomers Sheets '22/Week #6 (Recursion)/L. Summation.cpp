#include <bits/stdc++.h>
using namespace std;

long long Summation(int n, int a[], long long &sum)
{
    if(n==0) return sum; // Base case >> انتباه انها n==0
    sum+=a[n-1];
    return Summation(n-1,a,sum);
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long sum=0;
    cout<<Summation(n,a,sum)<<endl;
    return 0;
}
