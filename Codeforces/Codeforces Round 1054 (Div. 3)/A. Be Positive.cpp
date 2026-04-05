#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        short a[n];
        short c=0; // answer
        short x=0; // عدد العناصر إللي قيمتها -1
        for(short i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0) c++; // دائماً ، لإنه الصفر يجعل ناتج الضرب يساوي 0
            else if(a[i]==-1) x++; // بدي أعدّ كم -1 موجود
            // بحيث إذا كان العدد زوجي ،، أترك بدون زيادة لإنه سالب مع سالب رح يصير موجب
            // وإذا العدد فردي فقط أزيد 2 على قيمة c --> بحيث يصير عدد العناصر اللي قيمتها -1 عدد زوجي =)
        }
        
        if(x % 2 != 0) c+=2;
        cout<<c<<endl;
    }
}
