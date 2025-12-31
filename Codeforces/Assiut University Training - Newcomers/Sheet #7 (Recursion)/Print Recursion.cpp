#include <bits/stdc++.h>
using namespace std;
void Rec(int n)
{
    if(n<=0) return; // Base case
    cout<<"I love Recursion"<<endl;
    Rec(n-1);
}
int main()
{   
    int n;
    cin>>n;
    Rec(n);
    return 0;
}
