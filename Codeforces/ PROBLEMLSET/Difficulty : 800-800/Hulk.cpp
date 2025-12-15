#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    string s1="that I hate ", s2="that I love " , result="I hate ";
    for (int i=2;i<=n;i++)
    { 
        if(i%2 == 0 ) result+=s2;
        else result+=s1;
    }  
    result+="it";
    cout<<result;
    return 0;
}