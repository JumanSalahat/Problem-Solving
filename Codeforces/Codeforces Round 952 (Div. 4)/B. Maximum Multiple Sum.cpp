#include <iostream>
using namespace std;

int main() {
    short t; cin>>t;
    while(t--)
    {
        short n; cin>>n;
        short Max_sum=0;
        short ans;
        for(short i=2;i<=n;i++)
        {
            short sum=0;
            short a=1;
            while(a*i<=n)
            {
                sum+=a*i;
                a++;
            }
            if(sum>Max_sum) ans=i;
            Max_sum=max(Max_sum,sum);
        }
        cout<<ans<<endl;
    }
}
