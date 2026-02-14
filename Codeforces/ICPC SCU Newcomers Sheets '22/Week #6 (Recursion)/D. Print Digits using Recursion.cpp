#include <bits/stdc++.h>
using namespace std;

void Print_Digits(int n)
{
    if(n<=0) return ; // Base case
    Print_Digits(n/10); // انتبااه
    cout<<n%10<<" ";
}

int main() {
    int t; cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        if(n==0) cout<<0;
        Print_Digits(n);
        cout<<endl;
    }
    return 0;
}
