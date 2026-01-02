#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       // (c−a)+(b−c) = c-a+b-c = -a + b = b-a
       // إذاً النتيجة دائماً تساوي --> b-a
       cout<<b-a<<"\n";
    }
    return 0;
}
