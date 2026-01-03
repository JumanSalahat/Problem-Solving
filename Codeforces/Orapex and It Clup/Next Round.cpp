#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++) cin>>a[i]; 
    // السؤال معتبر بداية المصفوفة من إنديكس 1 مش 0
    // في c++ ->  الإنديكس دائماً يبدأ من 0
    // لهيك أهملت الإنديكس 0 وخليته يبدأ إضافة من إنديكس 1
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=a[k] && a[i]>0) c++;
    }
    cout<<c;
    return 0;
}
