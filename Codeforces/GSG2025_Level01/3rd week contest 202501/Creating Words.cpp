#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        char c = a[0]; // للمساعدة في عملية التبديل -> for swaping
        a[0]=b[0];
        b[0]=c;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
