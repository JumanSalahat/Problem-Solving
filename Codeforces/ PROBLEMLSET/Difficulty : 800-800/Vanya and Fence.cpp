#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h;
    cin>>n>>h;
    int a[n];
    int MinWidth=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h) MinWidth++; // طول الشخص أقل أو يساوي ارتفاع السّياج  -> بدون انحناء -> تزداد قيمة العرض بمقدار 1
        else MinWidth+=2; // طول الشخص أكبر من ارتفاع السّياج -> مع انحناء -> تزداد قيمة العرض بمقدار 2
    }
    cout<<MinWidth;
    return 0;
}
