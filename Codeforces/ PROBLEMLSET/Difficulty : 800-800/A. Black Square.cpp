#include <iostream>
using namespace std;

int main() {
   int i,a[5];
   for(i=1;i<=4;i++) cin>>a[i];
   
   string s; cin>>s;
   long long result=0;
   
   for(i=0;i<s.size();i++)
   result+=a[s[i]-'0'];
   
   cout<<result<<endl;
    return 0;
}
