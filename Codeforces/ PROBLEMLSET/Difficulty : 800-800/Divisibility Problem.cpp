#include <bits/stdc++.h>
using namespace std;
int main()
{   int t,a,b;
    cin>>t;
    while(t--)
    {
        int result = 0 ;
        cin>>a>>b;
        int x=a%b; // نجد باقي قسمة العددين 
        if(x!=0) result=b-x; // نطرح باقي القسمة من العدد -> b
        cout<<result<<endl;
    }
    return 0;
}
// مثال : a= 100 , b=13
// x= a % b = 9
// result = b-x = 13-9 = 4 

// note that : يجب مراعاة حالة ( باقي القسمة = صفر)