#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b;
    cin>>a>>b;
    int x=min(a,b);
    int y=max(a,b);
    
    long long SumALL=0,SumEven=0,SumOdd=0;
    for(int i=x;i<=y;i++)
    {
        SumALL+=i;
        if(i%2==0) SumEven+=i;
        else SumOdd+=i;
    }
    
    cout<<SumALL<<endl<<SumEven<<endl<<SumOdd<<endl;
    return 0;
}
