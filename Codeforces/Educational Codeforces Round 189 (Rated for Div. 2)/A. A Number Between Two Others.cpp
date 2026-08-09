#include <bits/stdc++.h>
using namespace std;

// z is divisible by x --> z%x == 0 
// يعني ---> z -> من مضاعفات -> x
// z = 2x,3x,4x,...

int main() 
{
    int t; cin>>t;
    long long x,y;
    while(t--)
    {
        bool ans = false;
        cin>>x>>y;
        // الفرق بين الحل هذا والحل السّابق هو نوع المتغيّر -> i --> مهم جداً يكون -> long long
        // لإنّه -> x,y --> من نوع -> long long
        for( long long i=2*x ; i<y ; i+=x ) // إذاً هون ضَمِنّا أنّ شرط --> z % x == 0 -> دائماً صحيح
        {
            if( y%i != 0) // i -> تُمَثّل -> z
            {
                ans = true;
                cout<<"YES\n";
                break;
            }
        }
        if(ans==false) cout<<"NO\n";
    }

    return 0;
}
