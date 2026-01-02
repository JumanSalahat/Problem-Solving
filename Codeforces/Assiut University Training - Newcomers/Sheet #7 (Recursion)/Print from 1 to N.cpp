#include <bits/stdc++.h>
using namespace std;
void Print_1_to_N(int n,int x=1)
{
    if(x>n) return; // Base case
    cout<<x<<"\n";
    Print_1_to_N(n,x+1);
}
int main()
{   
    int n;
    cin>>n;
    Print_1_to_N(n);
    return 0;
}
