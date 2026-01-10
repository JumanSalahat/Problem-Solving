#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        // بدأنا من عدد الأبقار ثم عدد الدجاج ، لأنّ المطلوب هو العدد الأدنى للحيوانات
        // لو كان المطلوب العدد الأقصى ، بنبدأ من الدجاج =)
        
        int NumCow = n/4;
        if(n>=4) n%=4; // انتبااه : مهم
        //: هون بنستخدم -> mod (%) -> مش قسمة 
        
        int NumChicken = n/2;
        int Result = NumCow + NumChicken;
        cout<<Result<<"\n";
    }
    return 0;
}
