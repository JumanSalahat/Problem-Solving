#include <bits/stdc++.h>
using namespace std;

void Pyramid(int n, int &x) // بده تركيز وانتباه .. غلّبني شوي .. بس الحمد لله انحلّ
{
    if(n==0) return;
    Pyramid(n-1,x);
    int c=n-1;
    for(int i=1;i<x;i++) cout<<' '; 
    for(int i=1;i<=2*c+1;i++) cout<<'*';
    cout<<endl;
    x--;
}

int main() {
   int n;
   cin>>n;
   int x=n;
   Pyramid(n,x);
   return 0;
}
