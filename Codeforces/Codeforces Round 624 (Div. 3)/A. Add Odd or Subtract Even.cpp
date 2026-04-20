#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x=abs(a-b);
        // نتيجة الحالات اعتماداً على التجريب واتّضح أنّها تنطبق على جميع الأمثلة لهذه الحالات
        if(x==0) cout<<0<<endl;
        else if(a>b && x%2==0) cout<<1<<endl;
        else if(a<b && x%2==0) cout<<2<<endl;
        else if(a>b && x%2 != 0) cout<<2<<endl;
        else if(a<b && x%2 != 0) cout<<1<<endl;
    }
    
    return 0;
}
