#include <bits/stdc++.h>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        char a[n][4];
        string s="";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            {
                cin>>a[i][j];
            }
        }
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<4;j++)
            {
                if(a[i][j]=='#') 
                { 
                    s+=to_string(j+1); // انتباه
                    s+=' '; 
                }
            }
        }
        cout<<s<<endl;
    }
}
