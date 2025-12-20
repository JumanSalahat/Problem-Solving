#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s; cin>>s; int c=0; int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]=='a') c++;
    }
    if(c>(n/2)) cout<<n;
    else 
    {
       int x=c+(c-1); // بحيث يصير عندي عدد الحرف -> a -> في السلسلة يمثّل أكثر من نصف طولها 
       // بالإضافة إلى إنّه بدي أطول سلسلة تحقق هالشّرط
       cout<<x;
    }
    return 0;
}
