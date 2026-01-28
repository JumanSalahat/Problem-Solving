#include <iostream>
using namespace std;

// ملاحظات وشرح للمسألة :
// floor -> f(x) = y , since y is a greater number that y<=x 
// floor -> f(x) = z , since z is a smallest number that z>=x
// floor -> f(x) = w , since w is closest integer to that number x

int main() {
   double a,b; // انتباه ، تعريف المتغيّرات مهم عشان -> double d
   cin>>a>>b;
   double d=a/b;
   cout<<"floor "<<a<<" / "<<b<<" = "<<int(d)<<endl;
   
   if ( d-int(d) > 0 )  cout<<"ceil "<<a<<" / "<<b<<" = "<<int(d)+1<<endl; // انتباه
   else if ( d-int(d) == 0) cout<<"ceil "<<a<<" / "<<b<<" = "<<int(d)<<endl;
   
   if( (d-int(d)) < 0.5) cout<<"round "<<a<<" / "<<b<<" = "<<int(d)<<endl;
   else cout<<"round "<<a<<" / "<<b<<" = "<<int(d)+1<<endl;
   return 0;
}
