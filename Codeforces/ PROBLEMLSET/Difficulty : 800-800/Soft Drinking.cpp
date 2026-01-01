#include <bits/stdc++.h>
using namespace std;
int main()
{  
       /*
       n : عدد الأصدقاء
    
       k :  عدد الزجاجات 
       l : كم ملّي لتر من المشروب في كل زجاجة
       --> k*l = كميّة المشروب الكليّة 
       
       c : عدد حبّات الليمون
       d : عدد شرائح الليمون في كل حبة
       --> c*d= عدد شرائح الليمون الكلّي
       
       p : كمية الملح الكلي 
       nl : كم ملّي من المشروب لكل شخص
       np : كم كمية الملح في كل مشروب 
       */
       
       // كمية المشروب الممكنة  = k*l ÷  nl  =  x
       // كمية الملح المستخدمة = p ÷ np = y
       // كمية شرائح الليمون المستخدمة  = c*d  = z
       
       // The friends want to make as many toasts as they can,
       // provided they all drink the same amount.
       // --> min(x,y,z)
       // How many toasts can each friend make?
       // --> min(x,y,z) ÷ n
       
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    long long x = k*l / nl;
    long long y = p/np;
    long long z = c*d;
    long long same_amount_of_drinks = min({x,y,z});
    long long taosts_of_each_friend = same_amount_of_drinks / n ;
    cout<<taosts_of_each_friend;
    
    return 0;
}
