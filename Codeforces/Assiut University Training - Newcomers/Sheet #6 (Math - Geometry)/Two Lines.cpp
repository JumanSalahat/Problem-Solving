#include <iostream>
using namespace std;

int main() {
    // line 1
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    // line 2
    int x3,y3,x4,y4;
    cin>>x3>>y3>>x4>>y4;
    
    
    if ( ( (y2-y1) * (x4-x3) ) == ( (x2-x1) * (y4-y3) ) ) cout<<"YES\n";
    else cout<<"NO\n";
    
    return 0;
}
