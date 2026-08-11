#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a[4];
    int sum=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<15-sum; // 15 = 1+2+3+4+5
    return 0;
}
