/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ; // عدد الغرف
    cin>>n;
    int p,q; // p -> عدد الأشخاص الموجودين حالياً في الغرفة // q -> سعة الغرفة من الأشخاص
    int c=0; // لحساب عدد الغرف المناسبة لاستقبال شخصين
    while(n--)
    {
        cin>>p>>q;
        if(p+2 <= q) c++; // بحيث أنا هون بفحص هل الغرفة بتقدر تستقبل كمان شخصين ؟
    }
    cout<<c;
    return 0;
}