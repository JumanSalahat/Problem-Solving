#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int t; cin>>t;
    int n,a,b;
    
    while(t--)
    {
       cin>>n>>a>>b;
       int sum1= n*a ; // whithout sale
       
       int sum2 = (n/2) * b ; // with sale 
       if (n%2==1) sum2+=a;
       
       int MinCost=min(sum1,sum2);
       cout<<MinCost<<endl;
    }
    return 0;
}