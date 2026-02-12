#include <bits/stdc++.h>
using namespace std;

long long Suffix_Sum(int n,int a[],int m) // مهم جداً : الانتباه لنوع المتغيّرات وبالتالي نوع الفنكشن
{
    long long sum=0;
    int x=n-1;
    for(int i=1;i<=m;i++)
    {
        sum+=a[x];
        x--;
    }
    return sum;
}

int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<Suffix_Sum(n,a,m)<<endl;
    return 0;
}

