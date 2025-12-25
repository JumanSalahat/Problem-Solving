#include <bits/stdc++.h>
using namespace std;
string NTime (int n, char c)
{
    string result="";
    for(int i=1;i<=n;i++)
        {
            result+=c;
            result+=" ";
        }
        return result;
}

int main()
{   int t,n;
    cin>>t;
    char c;
    while(t--)
    {
        cin>>n>>c;
        cout<<NTime (n,c);
        cout<<endl;
    }
    return 0;
}
