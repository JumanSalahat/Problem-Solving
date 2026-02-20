#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int a[n];
        int z=0;
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
            // At the first, we know that :  67 is a prime number
            
            //if(a[i]==1) c++; // =) --> نستغني عن هاد السّطر البرمجي ، والسبب :
            // إذا كانت عناصر المجموعة = {67} --> يعني فقط عنصر واحد
            // product = 67
            // رياضيات جديدة ، اللهمّ بارك =)
            // إذاً حاصل ضرب عنصر واحد = هو نفسه
            
            if(a[i]==67) z++;
            
        }
        if(z>=1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
