#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b;
    cin>>a>>b;
    int c=0;
    while(a<=b) // طول ما وزنه أقل أو يساوي وزن أخوه ، لإنه المطلوب يكون الوزن أكبر
    {
        a=a*3;
        b=b*2;
        c++;
    }
    cout<<c;
    return 0;
}
