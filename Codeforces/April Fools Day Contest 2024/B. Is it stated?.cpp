#include <iostream>
using namespace std;

int main() {
  short t;
  cin>>t;
  while(t--)
  {
      string s; cin>>s;
      bool found=false;
      for(int i=0;i<s.size()-1;i++)
      {
          if(s[i]=='i' && s[i+1]=='t') 
          {
            found=true;
            break;
          }
      }
      if(found==true) cout<<"YES\n";
      else cout<<"NO\n";
  }
  return 0;
}
