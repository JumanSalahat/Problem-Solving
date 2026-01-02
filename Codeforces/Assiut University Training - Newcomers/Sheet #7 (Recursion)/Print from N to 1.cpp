#include <bits/stdc++.h>
using namespace std;
void Print_N_to_1(int n)
{
    if(n<1) return; // Base case
    cout<<n;
    if(n != 1) cout<<" "; // ! انتباه --> Note : Make sure don't print any leading or trailing spaces.
    Print_N_to_1(n-1);
}
int main()
{   
    int n;
    cin>>n;
    Print_N_to_1(n);
    return 0;
}
