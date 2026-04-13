#include <bits/stdc++.h>
using namespace std;

int main() {
    short a[3];
    for(int i=0;i<3;i++) cin>>a[i];
    sort(a,a+3);
    
    if(a[2]-a[0]>=10) cout<<"check again\n";
    else cout<<"final "<<a[1]<<endl;
    
    return 0;
}
