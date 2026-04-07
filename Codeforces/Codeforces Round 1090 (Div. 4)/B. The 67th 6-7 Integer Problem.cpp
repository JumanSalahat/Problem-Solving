#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short a[7];
        for(short i=0;i<7;i++) cin>>a[i];
        sort(a,a+7);
        short sum=0;
        for(short i=0;i<6;i++) sum+=(-1*a[i]);
        sum+=a[6]; // آخر عنصر بعد الترتيب هو أكبر عنصر ، بجمعه بدون ما أغيّر إشارته ، للحصول على أكبر مجموع ممكن
        cout<<sum<<endl;
    }
}
