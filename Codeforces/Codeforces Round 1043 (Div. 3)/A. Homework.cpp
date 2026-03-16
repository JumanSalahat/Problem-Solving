#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        string a; cin>>a;
        short m; cin>>m;
        string b; cin>>b;
        string c; cin>>c; // طول السلسلة -> c -> تساوي طول السلسلة -> b
        for(short i=0;i<m;i++)
        {
            if(c[i]=='D') a+=b[i];
            else a=b[i]+a;
        }
        cout<<a<<endl; // Final result
    }
}
