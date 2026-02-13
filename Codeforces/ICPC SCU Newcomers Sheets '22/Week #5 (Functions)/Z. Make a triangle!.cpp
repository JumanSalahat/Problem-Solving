#include <bits/stdc++.h>
using namespace std;

int Make_a_triangle(int a, int b, int c)
{
    if( a+b>c && a+c>b && b+c>a ) return 0;
    
    int x=max({a,b,c});
    int y=min({a,b,c});
    int z= a+b+c - (x+y);
    int ans = x - (y+z) +1;
    return ans;
}

int main() {
   int a,b,c;
   cin>>a>>b>>c;
   cout<<Make_a_triangle(a,b,c)<<endl;
   return 0;
}
