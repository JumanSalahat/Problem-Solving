#include <bits/stdc++.h>
using namespace std;
string ShiftR(long long n,long long x,long long a[])
{
    long long i;
    long long shift=x%n;
    long long result[n];
    for(i=0;i<n;i++)
    {
        result[(i+shift)%n]=a[i];
    }
    string s="";
    for(i=0;i<n;i++)
    {
        s+=to_string (result[i]);
        s+=" ";
    } 
    return s;
}
int main()
{   long long x,n,i;
    cin>>n>>x;
    long long a[n];
    for(i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    string output=ShiftR(n,x,a);
    cout<<output;
    return 0;
}
