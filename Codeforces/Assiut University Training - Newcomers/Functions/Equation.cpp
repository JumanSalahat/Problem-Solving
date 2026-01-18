#include <bits/stdc++.h>
using namespace std;
long long Equation(int &x,int &n)
{
    long long s=0;
    for(int i=1;i<=n;i++)
    {
      if(i%2==0) s+=pow(x,i); 
    }
    return s;
}

int main()
{   int x,n;
    cin>>x>>n;
    long long result=Equation(x,n);
    cout<<result;
    return 0;
}
