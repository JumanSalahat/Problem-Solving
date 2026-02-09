#include <bits/stdc++.h>
using namespace std;

double Avg(int n, double a[])
{
    double sum=0;
    for(int i=0;i<n;i++)
    sum+=a[i];
    
    return sum/n;
}

int main() {
    int n; cin>>n;
    double a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<fixed<<setprecision(6)<<Avg(n,a)<<endl;
    
    // Print the average(mean) of the array with 6 digits after the decimal point.
    // fixed = ثبّت الفاصلة، لا تغيّر شكل الرقم
    // setprecision(6) = قصّها على 6 أرقام بعد الفاصلة
    // يعني اطبع الرقم بشكل ثابت، وبدقة 6 أرقام
    
    // set = اضبط / حدّد
    // precision = الدقّة 
    // Precision = بريسيجن = بريسيـ"جن" = جنّ الدقة
    // يعني دقة مجنونة
    // الدماغ يعشق الروابط الغريبة
    return 0;
}
