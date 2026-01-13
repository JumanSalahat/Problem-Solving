#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[n];
    int Max=-1e9;
    int Min=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        Max=max(Max,a[i]);
        Min=min(Min,a[i]);
    }
     int x = Max - Min + 1;// زدنا واحد لإنه احنا بنعد من الماكس للمينيمم
     // مثلاً من 3 إلى 1 .. 3 2 1 .. ثلاث أعداد .. لكن 3-1=2 لهيك ضفنا 1
     
     int result = x - n;
     cout<<result;
    return 0;
}
