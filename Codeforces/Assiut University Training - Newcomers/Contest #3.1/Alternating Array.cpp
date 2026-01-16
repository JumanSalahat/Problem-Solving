#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n];
    int c=0,z=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        // النّمط الأول
        if(i%2==0 && a[i]<0) c++;
        
        if(i%2== 1 && a[i]>0) c++;
        
        //النّمط الثاني
        if(i%2==0 && a[i]>0) z++;
        
        if(i%2== 1 && a[i]<0) z++;
    }
    cout<<min(c,z)<<endl;;
    return 0;
}
