/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int c;
    int result[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; // ادخل عناصر المصفوفة
        result[i]=a[i]; // خذ نسخة من المصفوفة المُدخَلة
       // ( عشان فيما بعد نقدر نستخدم هاي النّسخة للتعديل على المصفوفة المُدخلة  )
       
        if(a[i]==0) // عملية التعديل
        {
           c=i;
           for(int j=0;j<i;j++)
           {
            a[j]=result[c-1]; // reversing
            c--;
           } 
           for(int j=0;j<i;j++)
           {
            result[j]=a[j]; // رجعت حفظت نسخة من المصفوفة المُدخلة - بعد ما عدّلت عليها
           // عشان لو صادفني كمان صفر في المصفوفة المُدخلة -> أستخدم هاي النسخة المعدّلة للتعديل على المصفوفة المُدخلة 
           }
        }
    }
    // طباعة النتيجة كما هو مطلوب
    for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" ";
        }    
    return 0;
}