#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    
    sort(a,a+3); // ترتيب الأعداد تصاعدياً
    // a[0]<a[1]<a[2]
    
     // فكرتي للحل : إنه 
     // أحدّد العنصر الأوسط ترتيبيّاً --> a[1]
    // بعدين أطرحه من العنصر الكبير --> a[2] - a[1] = x
    // وأطرح العنصر الأصغر من العنصر الأوسط -->  a[1]  - a[0]  =  y
    // then result = x+y
    
    int x=a[2]-a[1];
    int y=a[1]-a[0];
    
    cout<<x+y;
    return 0;
}
