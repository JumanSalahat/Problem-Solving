#include <bits/stdc++.h>
using namespace std;

int DistinctNum(int n,int a[])
{
    set<int> x;
    for(int i=0;i<n;i++)
    {
        x.insert(a[i]);
    }
    return x.size();
}
int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<DistinctNum(n,a);
}
