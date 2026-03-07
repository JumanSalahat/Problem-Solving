#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int t; cin>>t;
   while(t--)
   {
       int x,y;
       int a=-1000, b=1000,c=-1000,d=1000;
       for(int i=1;i<=4;i++)
       {
           cin>>x; a=max(a,x); b=min(b,x);
           cin>>y; c=max(c,y); d=min(d,y);
       }
       int n = a-b;
       int m = c-d;
       // n=m -> since it is square
       cout<<n*m<<endl;
   }
}
