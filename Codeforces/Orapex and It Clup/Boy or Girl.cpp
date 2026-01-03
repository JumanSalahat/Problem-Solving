#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    set<char> x;
    for(int i=0;i<s.size();i++) x.insert(s[i]);
    if(x.size() % 2 == 1) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    return 0;
}
