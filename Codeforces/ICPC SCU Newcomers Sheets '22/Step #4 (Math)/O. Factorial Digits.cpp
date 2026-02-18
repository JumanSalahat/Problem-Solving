#include <bits/stdc++.h>
using namespace std;

long long Factorial(int n)
{
    if(n==0 || n==1) return 1; // Base case
    return n*Factorial(n-1); 
}


int main() {
    int n;
    cin>>n;
    string s = to_string(Factorial(n));
    cout<<"Number of digits of "<<n<<"! is "<<s.size()<<endl; // =)
    return 0;
}
