#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    sort(a,a+4);
    long long sum=a[3]; // آخر عنصر = أكبر قيمة
    cout<<sum-a[0]<<" "<<sum-a[1]<<" "<<sum-a[2]; 
    // لم يحدّد السؤال مقارنة بين -> a,b,c -> لهيك ما في قاعدة في طباعتهم
    // أو ما في داعي أعرف مين هي قيمة -> a ->  مثلاً
    return 0;
}
