#include <bits/stdc++.h>
using namespace std;

int Count_Vowels(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ) c++;
    }
    
    return c;
}

int main() {
   string s;
   getline(cin,s);
   cout<<Count_Vowels(s)<<endl;
   return 0;
}
