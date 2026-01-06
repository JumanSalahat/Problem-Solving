#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int a,b,c;
    cin>>a>>b>>c;
    
    // قانون هيرون
    double s = (a+b+c ) / 2 ;
    double area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
    if(a+b > c && a+c > b && c+b > a) 
    {
        cout<<"Valid\n"<<area;
    }
    else cout<<"Invalid";
    return 0;
}
