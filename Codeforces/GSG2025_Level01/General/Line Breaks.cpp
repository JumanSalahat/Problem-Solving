// For each test case, output the maximum number of words x
// such that the first x words have a total length of no more than m.
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n,m; cin>>t;
    string s;
    while(t--)
    {
      cin>>n>>m;
      int c=0; // لحساب عدد الكلمات التي تحقق الشرط
      int y=0; // للتأكد من تحقق الشرط على كل كلمة
      while(n--)
      {
          cin>>s;
          y+=s.size();
          if(y<=m) c++;
      }
      cout<<c<<endl;
    }
    return 0;
}
