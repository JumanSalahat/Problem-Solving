#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        int a[n],x=1;
        for(int i=0;i<n;i++) 
        { 
            cin>>a[i];
            x=max(x,a[i]); 
        }
        // بما إنه السؤال بسمح لنا نعمل سواب بين أول عنصر في المصفوفة وأكبر عنصر في المصفوفة
        // إذاً كل -> prefix -> رح يكون الماكس يساوي أكبر عنصر في المصفوفة
        // إذاً الناتج = أكبر عنصر في المصفوفة مضروب بعدد عناصر المجموعة
        
        cout<<x*n<<endl;
        
    }
}
