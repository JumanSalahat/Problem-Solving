#include <iostream>
using namespace std;

int main() {
   short t; cin>>t;
   while(t--)
   {
       short n; cin>>n;
       for(short i=0;i<2*n;i++)
       {
           for(short j=0;j<2*n;j++)
           {
               if(i/2 + j/2 & 1) cout<<"."; // مهم جداً : & = AND >>> 2 & 1 = 0
               else cout<<"#";
           }
           cout<<endl;
       }
   }
}
