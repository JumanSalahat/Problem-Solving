#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n],EvenPos[n],OddPos[n];
    int x=0,y=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i%2==0) { EvenPos[x]=a[i]; x++; }
        else { OddPos[y]=a[i]; y++; }
    }
    
    int c=0;
    for(int i=0;i<x;i++)
    {
        if(EvenPos[i]<0) c++;
    }
    
    for(int i=0;i<y;i++)
    {
        if(OddPos[i]>0) c++;
    }
    cout<<c;
    return 0;
}
