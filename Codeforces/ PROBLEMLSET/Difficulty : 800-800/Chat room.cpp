#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    
    string x="hello"; int y=0 ; 
    int c=0; 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[y]) { y++; c++; }
    }
    
    if(c==5) cout<<"YES"; // 5 -> هو عدد أحرف كلمة => hello
    else cout<<"NO";
    return 0;
}
