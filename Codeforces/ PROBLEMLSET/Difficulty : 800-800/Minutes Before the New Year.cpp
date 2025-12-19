#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int t; cin>>t;
    int h,m;
    
    while(t--)
    {
       cin>>h>>m;
       int x=24-h;
       
       int y;
       if(m!=0) { x--; y=60-m; }
       if(m==0) { y=m; }
       
       int result= 60*x + y ;
       cout<<result<<endl;
    }
    return 0;
}