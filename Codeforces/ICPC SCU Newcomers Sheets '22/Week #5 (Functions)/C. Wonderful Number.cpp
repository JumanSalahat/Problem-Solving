#include <bits/stdc++.h>
using namespace std;

bool WonderfulNum(int n)
{
    if(n%2==0) return false;
    bitset<32> b(n);
    string s = b.to_string();
    s = s.substr(s.find('1')); // مهم جداً
    
    string t = s;
    reverse(t.begin(), t.end());
    
    return (n%2==1 && s==t);
}

int main() {
    int n;
    cin>>n;
    if(WonderfulNum(n) == false ) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
   
}
