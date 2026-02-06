#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    char s,q;
    cin>>a>>s>>b>>q>>c;
    int x;
    if(s=='+' && c==a+b) cout<<"Yes\n";
    else  if(s=='-' && c==a-b) cout<<"Yes\n";
    else  if(s=='*' && c==a*b) cout<<"Yes\n";
    else {
        if(s=='+') cout<<a+b<<endl;
        else if(s=='-') cout<<a-b<<endl;
        else if(s=='*') cout<<a*b<<endl;
    }
    return 0;
}
