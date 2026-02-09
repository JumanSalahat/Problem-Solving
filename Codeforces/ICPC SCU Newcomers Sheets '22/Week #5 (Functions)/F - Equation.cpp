#include <bits/stdc++.h>
using namespace std;

// x^0 = 1 --> so , x^0 - 1 =0
long long Equation(int x,int n)
{
    long long sum=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) sum+=pow(x,i);
    }
    
    return sum;
}

int main() {
   int x,n;
   cin>>x>>n;
   cout<< Equation(x,n)<<endl;
   return 0;
}
