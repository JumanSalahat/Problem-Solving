#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    //المسألة تعتمد على نمط تراكمي (pattern)
    // القيمة a--> هي حجم (عدد  الطبقات / المستويات) حول المركز
    cout<<a*6*(a-1)+1; // +1 هي الكرة التي في المركز

    return 0;
}
