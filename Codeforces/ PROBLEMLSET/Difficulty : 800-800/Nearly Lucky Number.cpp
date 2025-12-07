// Is (n) nearly lucky ?
// A number is nearly lucky : if the (count of digits) "4" and "7" inside it .. is itself a lucky number
// Note : Being lucky doesn’t guarantee being nearly lucky — only the count of lucky digits matters
#include <bits/stdc++.h>
using namespace std;
int main()
{   string n;
    cin>>n;
    long long c=0; // Count how many digits in the number are equal to 4 or 7
    
    for(int i=0;i<n.size();i++)
    {
       if(n[i]=='4' || n[i]=='7') c++; 
    }
    
    // is ( c ) lucky number ?
    string s = to_string(c);
    int y=0;
    for(int i=0;i<s.size();i++)
    {
       if(s[i]=='4' || s[i]=='7') y++;
    }
    if(y==s.size()) cout<<"YES";
    else cout<<"NO"; 

    return 0;
}
