#include <iostream>
using namespace std;

int main() {
   short t; cin>>t;
   while(t--)
   {
       string w; cin>>w;
       string s="";
       for(int i=0;i<w.size()-2;i++) s+=w[i];
       s+='i';
       cout<<s<<endl;
   }
}
