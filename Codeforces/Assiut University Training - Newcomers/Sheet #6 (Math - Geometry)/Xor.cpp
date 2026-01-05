// هذا السؤال بشبه  --> Fibonacci Number -->  تقريباً
// ولكن جرّبت أحلها بنفس النمط وما زبط لإنّه حدود --> Q -> كبيرة فما بزبط لوب
// المهم نفكر فيها بطريقة مختلفة
// نتذكر من الديجيتال إنه : 
//  x XOR x = 0 , x XOR 0 = XOR
// هالقاعدتين جداً مهمات في حل هالسؤال 
// ولو نوجد قيم الاقتران لأول كم تيرم رح نستنتج الحل الآتي ..
#include <bits/stdc++.h>
using namespace std;
int main()
{   
   long long A,B,Q;
   cin>>A>>B>>Q;
   if(Q%3==1) cout<<A;
   else if(Q%3==2) cout<<B;
   else if(Q%3==0) cout<<(A^B);
   return 0;
}
