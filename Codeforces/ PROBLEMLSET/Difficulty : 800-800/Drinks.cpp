/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,p;
    cin>>n;
    int x=n; // خزّنت قيمة -> n -> في متغيّر جديد ، لإنّي رح أرجع أستخدمها فيما بعد ( للحفاظ على القيمة نفسها)
    double sum=0;
    // He took equal proportions of each of the n drinks and mixed them -> معلومة بالسؤال مهمّة جداً
    // أخذ كميات متساوية من كل مشروب وخلطهم مع بعض
    // يعني من كل مشروب أخد نفس الحجم
    
    // لهيك فكرة حل السؤال : النسبة النهائية = متوسط النِّسَب 
    // متوسّط النسب = مجموع النسب ÷ عدد المشروبات
    while(x--)
    {
        cin>>p;
        sum+=p; 
    }
    double result= sum/n;
    cout<<result;
    return 0;
}