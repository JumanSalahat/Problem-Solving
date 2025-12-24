#include <bits/stdc++.h>
using namespace std;
int main()
{   
    // تعريف المتغيّرات
   int n,m; cin>>n>>m;
   int a[n][m];
   int x; int c=0;
   
   // إدخال عناصر المصفوفة الثّنائيّة
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
          cin>>a[i][j];
       }
   }
   
   // البحث عن العنصر -> x -> في المصفوفة الثّنائيّة
   cin>>x;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
          if(a[i][j] == x) c++; 
       }
   }
   
   
   if(c != 0) cout<<"will not take number";
   else cout<<"will take number";
   
   return 0;
}
