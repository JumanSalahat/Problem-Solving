#include <iostream>
using namespace std;

void Shift_Zeros(int n,int a[])
{
   int b[n];
   int x=0;
   int c=0;
   
   // المرحلة الأولى لتنفيذ المطلوب
   for(int i=0;i<n;i++)
   {
       if(a[i] != 0) { b[x]=a[i]; x++; }
       else c++;
   }
   
   // المرحلة الثانية لتنفيذ المطلوب
   for(int i=1;i<=c;i++)
   {
       b[x]=0;
       x++; 
   }
   
   // طباعة النّاتج المطلوب
   for(int i=0;i<n;i++)
   {
       cout<<b[i]<<" ";
   }
   cout<<endl;
   
   
}

int main() {
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    Shift_Zeros(n,a);
    return 0;
}
