#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin>>n;
    int p; cin>>p;
    int a[p];
    for(int i=0;i<p;i++)  cin>>a[i]; 
    
    int q; cin>>q; 
    int b[q];
    int result[p+q];
    for(int i=0;i<p;i++) { result[i]=a[i]; } 
    
    int y=p;
    for(int i=0;i<q;i++) { cin>>b[i]; result[y]=b[i]; y++; }
    
    set<int> x;
    for(int i=0;i<p+q;i++)
    {
       x.insert(result[i]); 
    }
    
    if(x.size()==n) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
    
    return 0;
}
