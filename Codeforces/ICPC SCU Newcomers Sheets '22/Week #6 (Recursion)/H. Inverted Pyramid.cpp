#include <bits/stdc++.h>
using namespace std;

void Inverted_Pyramid(int n, int &x) 
{
    if(n==0) return;
    int c=n-1;
    for(int i=1;i<=x;i++) cout<<' '; 
    for(int i=1;i<=2*c+1;i++) cout<<'*';
    cout<<endl;
    x++;
    Inverted_Pyramid(n-1,x); // بس بنغيّر موقع هالسطر عشان يصير يطبع بالعكس =)
}

int main() {
   int n;
   cin>>n;
   int x=0; // وقيمة -> x -> بتصير تبدأ من 0 
   Inverted_Pyramid(n,x);
   return 0;
}
