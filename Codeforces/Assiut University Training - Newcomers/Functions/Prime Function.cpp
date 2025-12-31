#include <bits/stdc++.h>
using namespace std;
bool Prime (long long N)
{
  if(N<=1) return false ;
  
  for(long long i=2;i<=sqrt(N);i++) 
  {
      if(N%i==0) return false;
  }
  
  return true;
}
int main()
{
  int t; 
  cin>>t;
  while(t--)
  {
      long long N;
      cin>>N;
      bool result = Prime(N);
      if(result==false) cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
  }
    return 0;
}
