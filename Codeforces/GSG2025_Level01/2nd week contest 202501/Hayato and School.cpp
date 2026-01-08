#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int even_index[n]; int x=0;
        int odd_index[n]; int y=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0) { even_index[x]=i+1; x++; }
            else { odd_index[y]=i+1; y++; }
            
             // السؤال اعتبر بداية المصفوفة من إنديكس 1
            //  والكومبايلر هون بعتبر بداية المصفوفة من إنديكس 0
           // لهيك بزيد 1 على -> i 
        }
        
       // OddSum = odd + odd + odd , or OddSum = even + even + odd
       // يعني بالمصفوفة بدي على الأقل عدد فردي واحد 
       
       int even = x; 
       int odd = y;
       // هون بوخذ -> x , y -> بنفس قيمتهم مش زيادة 1 
       // لإنه فوق آخر عملية بعد الإضافة زدتهم
       // ( لإني كنت بتعامل معهم كأرقام إنديكس وحكينا إنه اعتبرت بداية المصفوفة من إنديكس 0)
      
       if(odd >=3) 
       cout<<"YES\n"<<odd_index[0]<<" "<<odd_index[1]<<" " <<odd_index[2]<<endl;
       
       else if (odd>=1 && even>=2)
       cout<<"YES\n"<<odd_index[0]<<" "<<even_index[0]<<" "<<even_index[1]<<endl;
       
       else cout<<"NO\n";
    }
    return 0;
}
