#include <bits/stdc++.h>
using namespace std;

void Max_Min(int n,int a[])
{
    int x=1e5; // to find Min
    int y=0; // to find Max --> since , (0 ≤ a[i] ≤ 10^5)
    
    for(int i=0;i<n;i++)
    {
        x=min(x,a[i]);
        y=max(y,a[i]);
    }
    
    cout<<x<<" "<<y<<endl;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    Max_Min(n,a);
   
    return 0;
}
