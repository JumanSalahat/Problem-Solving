#include <iostream>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--)
    {
        int n ; cin>>n;
        int a[n];
        int count_0=0,count_1=0,count_3=0,count_2=0,count_5=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=-1;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0) count_0++;
            else if(a[i]==1) count_1++;
            else if(a[i]==3) count_3++;
            else if(a[i]==2) count_2++;
            else if(a[i]==5) count_5++;
            
            if(count_0>=3 && count_1>=1 && count_3>=1 && count_2>=2 && count_5>=1) 
            {
                x=i;
                break;
            }
        }
        cout<<x+1<<endl;
    }
    return 0;
}
