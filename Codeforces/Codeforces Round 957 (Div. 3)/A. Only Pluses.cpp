#include <bits/stdc++.h>
using namespace std;
int main() {
    short t; cin>>t;
    while(t--)
    {
        short arr[3];
        for(short i=0;i<3;i++) cin>>arr[i];
        for(short i=1;i<=5;i++)
        {
            sort(arr,arr+3);
            arr[0]++;
        }
        cout<<arr[0]*arr[1]*arr[2]<<endl;
    }
}
