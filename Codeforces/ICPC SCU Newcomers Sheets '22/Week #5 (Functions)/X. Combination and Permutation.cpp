#include <bits/stdc++.h>
using namespace std;

long long NCR(int n, int r) // is the Combination --> الترتيب لا يهم
{
    return tgamma(n+1) / ( tgamma(r+1) * tgamma(n-r+1) ) ;
}

long long NPR(int n, int r) // is the Permutation --> الترتيب مهم
{
    return tgamma(n+1) / tgamma(n-r+1);
}

int main() {
    long long n,r; // A=n , B=r --> A,B من السؤال
    cin>>n>>r;
    cout<<NCR(n,r)<<" "<<NPR(n,r)<<endl;
    return 0;
}

// very importatn note : n!=Γ(n+1) --> Γ = tgamma()
