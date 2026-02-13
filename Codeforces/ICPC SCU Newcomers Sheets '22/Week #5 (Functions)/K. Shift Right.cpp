#include <bits/stdc++.h>
using namespace std;

void Shift_Right(int n, int x, int a[])
{
    if(x%n != 0)
    {
        int y=x%n;
        int b[n];
        for(int i=0;i<n;i++) b[i]=a[i];
         
        for(int i=1;i<=y;i++)
        {
            for(int j=0;j<n;j++)
            {
                a[0]=b[n-1];
                a[j]=b[j-1];
            }
            
            for(int i=0;i<n;i++) b[i]=a[i]; //   b حركة مهمة جداً ، تجديد عناصر المصفوفة 
        }
    }
   
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

int main() {
   int n,x;
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   Shift_Right(n,x,a);
   return 0;
}
