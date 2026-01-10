// Mean = Average = (مجموع الأعداد) ÷ (عددها)
#include <bits/stdc++.h>
using namespace std;
double Sum (int n, double a[])
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    double result=sum/n;
    return result;
}
int main()
{   int n;
    cin>>n;
    double a[n];
    double output=Sum(n,a);
    cout << fixed << setprecision(6)<<output;    // fixed → طريقة العرض ثابتة على شكل رقم عشري كامل ، مش الطريقة العلمية
                                                // setprecision(6) → يطبع دائمًا 6 منازل بعد الفاصلة.
    return 0;
}
