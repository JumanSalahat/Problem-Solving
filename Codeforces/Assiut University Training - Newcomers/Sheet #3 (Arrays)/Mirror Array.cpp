#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,m;
    cin>>n>>m;
    long long a[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    }
    
    // حدود وشرط الحَلَقة الأولى ثابت
    // فقط نعكس حدود الحَلَقة الثانية
    for(int i=0;i<n;i++)
    {
        for(int j=m-1;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}    
