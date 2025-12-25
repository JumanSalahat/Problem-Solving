// مهم جداً : معلومات رياضيات
// العلاقة بين عناصر القطر الرئيسي -> i=j
// العلاقى بين عناصر القطر الثّانوي -> i+j=n-1

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n][n];
    
    int SumPri=0;
    int SumSec=0;
    
    // إدخال عناصر المصفوفة 
    // وإيجاد مجموع عناصر القطر الرئيسي ، ومجموع عناصر القطر الثانوي
    for(int i=0;i<n;i++) 
    {
       for(int j=0;j<n;j++)
       {
          cin>>a[i][j];
          if(i==j) SumPri+=a[i][j];
          if(i+j==n-1) SumSec+=a[i][j];
       } 
    }
    
    // إيجاد المطلوب :
    // -> the absolute difference between the summation of the matrix main diagonals
    int result=abs(SumPri-SumSec);
    cout<<result;
    return 0;
}