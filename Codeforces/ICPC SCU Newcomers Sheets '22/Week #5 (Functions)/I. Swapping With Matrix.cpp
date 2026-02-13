#include <bits/stdc++.h>
using namespace std;

const int MAX=500;

void Swapping_With_Matrix(int n, int a[MAX][MAX],int x , int y)
{
    // swap row X with row Y
    for(int j=0;j<n;j++)
    swap(a[x][j],a[y][j]);
    
    // swap column X with column Y
    for(int i=0;i<n;i++)
    swap(a[i][x],a[i][y]);
    
    // طباعة الناتج
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       cout<<a[i][j]<<" ";
       
       cout<<endl;
   }
}

int main() {
   int n,x,y;
   cin>>n>>x>>y;
   x--; y--; // since array in c++ baced on 0
   int a[MAX][MAX];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       cin>>a[i][j];
   }
   
   Swapping_With_Matrix(n,a,x,y);
   return 0;
}
