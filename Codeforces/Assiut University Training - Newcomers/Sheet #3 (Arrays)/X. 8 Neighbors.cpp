#include <bits/stdc++.h>
using namespace std;

int main() {
   short n,m; cin>>n>>m;
   char a[n][m];
   for(short i=0;i<n;i++)
   {
       for(short j=0;j<m;j++)
       cin>>a[i][j];
   }

   short x,y; cin>>x>>y;
   x--; y--;

   if(a[x][y+1] !='.' && a[x][y-1] !='.')
   {
       x++;
       if(a[x][y]!='.' && a[x][y+1]!='.' && a[x][y-1] !='.')
       {
           x-=2;
            if(a[x][y]!='.' && a[x][y+1]!='.' && a[x][y-1]!='.')
            {
                cout<<"yes\n";
                return 0;
            }
       }
   }
   cout<<"no\n";
   return 0;
}
