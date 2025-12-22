#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
     // ترتيب عناصر المصفوفة تصاعديًا 
    // فأول عنصر يحقق الشرط هو الجواب مباشرة، لأن الأصغر هو الأكثر احتمالًا أن يقسم الباقي
     sort(a,a+n);
     int c=0;
     for(int i=0;i<n;i++)
     {
         if(a[i]%a[0]==0) c++;
     }
     
     if(c==n) cout<<a[0];
     else cout<<-1;
     
    return 0;
}
