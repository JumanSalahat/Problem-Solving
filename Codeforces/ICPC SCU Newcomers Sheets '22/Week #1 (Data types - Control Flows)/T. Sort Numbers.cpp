#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    cout<<min({a,b,c})<<endl<<(a+b+c)-(max({a,b,c})+min({a,b,c}))<<endl<<max({a,b,c})<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
