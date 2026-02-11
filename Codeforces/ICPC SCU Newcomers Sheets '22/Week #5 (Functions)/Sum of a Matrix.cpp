#include <bits/stdc++.h>
using namespace std;

const int MAX=100; // مهم جداً

void Sum_of_a_Matrix(int r, int c, int a[][MAX], int b[][MAX])
{
    
    int sum[r][c];
    
    // تحضير الناتج كما هو مطلوب
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        sum[i][j] = a[i][j] + b[i][j];
    }
    
    // طباعة الناتج
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<sum[i][j]<<" ";
        
        cout<<endl;
    }
 
}

int main() {
   int r,c; cin>>r>>c;
   int a[MAX][MAX], b[MAX][MAX];
   
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       cin>>a[i][j];
   }
   
   for(int i=0;i<r;i++)
   {
       for(int j=0;j<c;j++)
       cin>>b[i][j];
   }
   
   Sum_of_a_Matrix(r,c,a,b);
   return 0;
}
