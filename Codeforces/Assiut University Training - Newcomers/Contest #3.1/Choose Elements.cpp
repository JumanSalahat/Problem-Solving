#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    
    // ترتيب عناصر المصفوفة تنازليّاً
    // للحصول على أكبر مجموع ممكن
    sort(a,a+n,greater<int>());

    long long sum=0;
    for(int i=0;i<k;i++) 
    {
        if(a[i]>0) sum+=a[i];
        else break;
        // ليش بضيف فقط الأرقام الموجبة ؟
        // لإنه بده أكبر مجموع وكمان بحكيلي إنه مسموح أوخذ على الأكثر -> k عناصر
        // يعني مش مجبور أوخذ كل العناصر ، خاصة إذا كانت سالبة
        // لإنه العناصر السالبة رح تقلل من المجموع وأنا بدي أكبر مجموع ممكن
    }
    cout<<sum;
    return 0;
}
