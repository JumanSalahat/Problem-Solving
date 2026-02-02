#include <iostream>
using namespace std;

int main() {
    char x;
    cin>>x;
    if(x>='a' && x<='z') x=toupper(x);
    else if(x>='A' && x<='Z') x=tolower(x);
    cout<<x<<endl;
    return 0;
}
