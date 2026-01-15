#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s,test="codeforces";
        cin>>s;
        int c=0,x=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != test[i]) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
