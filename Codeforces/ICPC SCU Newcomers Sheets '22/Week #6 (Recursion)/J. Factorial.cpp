#include <bits/stdc++.h>
using namespace std;

long long Factorial(int n,long long &x)
{
    if(n==0) return x; // Base case
    x*=n;
    return Factorial(n-1,x); // الفنكشن عندي نوعه long long -> كل استدعاء لازمه -> return
    // عشان هيك بكتب -> return Factorial(n-1,x);
    // مش -> Factorial(n-1,x);
}

int main() {
    int n;
    long long x=1;
    cin>>n;
    cout<<Factorial(n,x)<<endl;
    return 0;
}
