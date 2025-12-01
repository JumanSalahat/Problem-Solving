#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    string s;
    cin>>a>>b>>s;
    int x=0;
    
    for(int i;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9') x++;
    }

    if(s.size()==a+b+1 && s[a]=='-' && x==s.size()-1) cout<<"Yes"; 
    else cout<<"No";
    
    // position A+1 is s[a] --> since , string start with index 0 
    // x==s.size()-1 --> لإنه بنستثني  --> '-'
    
    return 0;
}
