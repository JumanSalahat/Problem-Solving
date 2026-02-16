#include <bits/stdc++.h>
using namespace std;

long double Array_Average(int n, int a[], long double &sum,int x)
{
    if(n==0) return sum/x; // x -> تحمل قيمة -> n -> الأصلية 
    sum+=a[n-1];
    return Array_Average(n-1,a,sum,x);
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    long double sum=0; int x=n;
    cout<<fixed<<setprecision(6)<<Array_Average(n,a,sum,x)<<endl;
    return 0;
}
