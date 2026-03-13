#include <bits/stdc++.h>
using namespace std;

//  الفكرة الذكيّة : عدد الألوان الأقل الذي نحتاجه = أكبر عدد مرّات تكرار لأيّ رقم في المصفوفة
// إذاً لنبحث عن أكبر عدد تكرار لأيّ رقم في المصفوفة
// لأنّ كلّ تكرار إضافي يحتاج لوناً مُختلفاً حتى يبقى التّسلسل --> strictly increasing
// --> أكبر تكرار = أقلّ عدد ألوان نحتاجه

int main() {
   short t,n;
   cin>>t;
   while(t--)
   {
       cin>>n;
       short a[n];
       short freq[101]={0}; // since, 1 ≤ n ≤ 100
       for(short i=0;i<n;i++)
       {
           cin>>a[i];
           freq[a[i]]++;
       }
       
       short ans=0;
       // since 1 ≤ ai​≤ n --> إذا حدود مصفوفة الـ --> freq --> تبدأ من 1 ، لهيك حجمها لازم يكون 101
       for(short i=1;i<=n;i++) ans = max(ans,freq[i]);
       cout<<ans<<endl;
   }
}
