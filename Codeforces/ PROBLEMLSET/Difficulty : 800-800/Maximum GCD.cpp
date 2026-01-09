// ملاحظة مهمة : هذا الحل فقط بشتغل على قيم صغيرة
// في تحته كمان حل بطريقة أفضل ومناسبة للأرقام الكبيرة
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int ans=1;
        for(int a=1;a<=n-1;a++)
        {
            for(int b=a+1;b<=n;b++)
             {
                int x=gcd(a,b);
                ans=max(ans,x);
             }
        }
        cout<<ans<<endl;
    }
    return 0;
}

// --------------------------------------

// الحل السابق -> Time complexity = O(n^2)
// لهيك أعطاني -> time limit exceded
// نختصر الفورلوب وما بنحتاج .. عندنا قانون جاهز بالرياضيات .. 
// مهم جداً :
// if 1≤a<b≤n --> then, max gcd(a,b)= n/2
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        cout<<n/2<<endl;
    }
    return 0;
}

// للاستفادة : كمان في قانون بشبهه ولكن بتغيير بسيط جداً على الشرط
// if 1≤a≤b≤n --> then, max gcd(a,b)= n
// الفرق هو المساواة بين -> a,b

