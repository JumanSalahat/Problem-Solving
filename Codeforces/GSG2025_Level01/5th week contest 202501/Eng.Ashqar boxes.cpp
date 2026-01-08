#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long n,x;
    cin>>n>>x;
    long long c=0;
    while(n--)
    {
        long long l,r,i;
        cin>>l>>r;
        if(x >= l && x <= r) c++; 
        // انتباه : مهم جداً نستخدم -> and (&&) -> مش -> or (||)
    }
    cout<<c;
    return 0;
}
