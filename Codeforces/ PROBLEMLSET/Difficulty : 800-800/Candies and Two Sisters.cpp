// تم حلّ هذه المسألة بالملاحظة  ->  from Examples : input & output
#include <bits/stdc++.h>
using namespace std;
int main()
{   int t,n,result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0) result=n/2 -1;
        else result=n/2;
        cout<<result<<endl;
    }
    return 0;
}