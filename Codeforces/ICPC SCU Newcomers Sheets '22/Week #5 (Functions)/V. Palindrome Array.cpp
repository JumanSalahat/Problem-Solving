#include <bits/stdc++.h>
using namespace std;

bool Palindrome_Array(int n,int a[])
{
   int x;
   if(n%2==0) x=n/2;
   else x=n/2 +1;
   
   for(int i=0;i<x;i++) // لو استخدمت -> n/2 -> مباشرة بدون -> x -> صح مية بالمية لو فردي أو زوجي 
   // لإنه في حالة كانت -> n -> فردي.. آخر مقارنة رح تكون مقارنة العنصر الوسيط بنفسه 
   {
       if(a[i] != a[n-1-i]) return false; // a[n-1-i] -> لإنه بنبلش نقارن أول عنصر بآخر عنصر
   }
   
   return true;
}
 
int main() {
   int n; cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   if(Palindrome_Array(n,a)== true) cout<<"YES\n";
   else cout<<"NO\n";
   return 0;
}
