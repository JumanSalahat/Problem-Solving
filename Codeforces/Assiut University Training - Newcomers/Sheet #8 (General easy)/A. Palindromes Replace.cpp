#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin>>s;
    int n = s.size();
    
    for(int i=0;i<n/2;i++) // حتى لو كان طول السلسلة فردي عادي ، لإنه الحرف اللي بالوسط ما في داعي أفحصه
    {
        if(s[i]=='?' && s[n-1-i]=='?') { s[i]='a'; s[n-1-i]='a'; } 
        // ليش اخترنا 'a' -- > choose the lexicographically smallest on
        
        else if(s[i]=='?') s[i]=s[n-1-i]; 
        else if(s[n-1-i]=='?') s[n-1-i]=s[i]; 
        else if(s[i] != s[n-1-i]) { cout<<-1<<endl; return 0; }
    }
    
    if(n%2 != 0 && s[n/2]=='?') s[n/2]='a';
    cout<<s<<endl;
    return 0;
}
