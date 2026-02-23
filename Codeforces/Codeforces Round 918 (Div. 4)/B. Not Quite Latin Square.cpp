#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        char a[3][3];
        int x;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='?') x=i;
            }
        }
        
        string s="";
        for(int j=0;j<3;j++)
        {
            if(a[x][j] != '?') s+=a[x][j];
        }
        
        if( (s[0]=='A' || s[0]=='B') && (s[1]=='A' || s[1]=='B') ) cout<<"C\n";
        else if( (s[0]=='A' || s[0]=='C') && (s[1]=='A' || s[1]=='C') ) cout<<"B\n";
        else if( (s[0]=='C' || s[0]=='B') && (s[1]=='C' || s[1]=='B') ) cout<<"A\n";
    }
    return 0;
}
