#include <iostream>
using namespace std;

int main() {
    short n; int t;
    cin>>n>>t;
    int a[n];
    int ans=0;
    for(int i=0;i<n;i++) cin>>a[i];
    
    for(int i=0;i<n;i++) 
    {
        int x = 86400-a[i]; // الوقت المُتاح للقراءة في البوم
        t-=x;
        ans++;
        if(t<=0) break; // لإنّه خلّصنا قراءة الكتب
    }
    cout<<ans<<endl;
    return 0;
}
