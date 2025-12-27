// Optimized solution of this problem :
// حل السؤال بطريقة مختلفة ، تعتمد على قوانين الرياضيات بدون  -> loop
// Time complexcity = O(1)

// To find SumAll :
// x=min(a,b) , y=max(a,b)
// SumAll = (x+y) * (y-x+1) /2

 // To find SumEven :
// z = عدد الأرقام الزوجية * ( أول عدد زوجي + آخر عدد زوجي ) ​
// SumEven = z/2 ;

// To find SumOdd :
// SumOdd=SummAll-SumEven

#include <bits/stdc++.h>
using namespace std;
int main()
{   
    long long a,b;
    cin>>a>>b;
    long long x=min(a,b);
    long long y=max(a,b);
    
    long long SumAll,SumEven,SumOdd;
    
    //SumAll :
    SumAll = ( (x+y) * (y-x+1) ) /2 ;
    
    // SumEven :
    long long even_x=x,even_y=y;
    if( even_x %2 != 0) even_x++; // first even
    if( even_y %2 != 0) even_y--; // last even
    
    if( even_x > even_y ) SumEven=0;
    else {
        long long countEven =  ( ( even_y - even_x ) /2 ) +1 ;
        SumEven = ( countEven * ( even_x + even_y ) ) / 2 ;
    }
    
    // SumOdd :
    SumOdd = SumAll - SumEven;
    
    cout<<SumAll<<endl<<SumEven<<endl<<SumOdd<<endl;
    return 0;
}
