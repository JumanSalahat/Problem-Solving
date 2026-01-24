#include <bits/stdc++.h>
using namespace std;
// without function
int main() {
   int n; cin>>n;
   int a[n][n];
   int x,y;
   cin>>x>>y;
   x--;
   y--; 
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       cin>>a[i][j];
   }
   
    // first level swaping
     for(int j=0;j<n;j++)
     {
         swap(a[x][j],a[y][j]);
     }
     
     // second level swaping
     for(int i=0;i<n;i++)
     {
         swap(a[i][x],a[i][y]);
     }
 
   
   //print
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       cout<<a[i][j]<<" ";
       
       cout<<endl;
   }
}
