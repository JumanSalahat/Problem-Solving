#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long s1,s2,s3,s4;
    int c=0;
    cin>>s1>>s2;
    if(s2==s1) c++;
    cin>>s3;
    if(s3==s2 || s3==s1) c++;
    cin>>s4;
    if(s4==s3 || s4==s2 || s4==s1) c++;
    cout<<c;
    return 0;
}
