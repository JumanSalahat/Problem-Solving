#include <bits/stdc++.h>
using namespace std;

bool prime(long long x)
{
    if(x==1) return false;
    if(x==2) return true;
    
    for(long long i=2;i*i<=x;i++)
    if(x%i==0) return false;
    
    return true;
}

int main() {
    long long n; cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    
    for(long long i=0;i<n;i++) 
    {
        long long x=sqrt(a[i]); 
        if(x*x==a[i] && prime(x)==true) cout<<"YES\n"; // عدد عنده بالضبط 3 قواسم موجبة ⇒ هذا العدد لازم يكون مربع عدد أولي
        else cout<<"NO\n";
    }
    
    // فكرة السّؤال :
    // p = عدد أولي 
    // إذا العدد = p^2 --> قواسمه هي ثلاثة قواسم فقط (1,p,p^2)
    return 0;
}
