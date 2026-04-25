#include <iostream>
using namespace std;

int main() {
    //it required to sum the first number and the reverse of the second number
    
    int a,b;
    cin>>a>>b;
    int new_b=0;
    while(b)
    {
        new_b=new_b*10+b%10;
        b/=10;
    }
    //cout<<new_b<<endl;
    cout<<a+new_b<<endl;
    return 0;
}
