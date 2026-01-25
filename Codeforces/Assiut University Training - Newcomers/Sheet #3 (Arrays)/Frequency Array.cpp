#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int a[n];
    int freq[m]={0};
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        freq[a[i]-1]++; // هون قيمة a[i] -> صارت كإنها إنديكس للمصفوفة -> freq -> طرحت 1 ، لإنه في لغة -> c++ -> الإنديكس من صفر
    }
    
    for(int i=0;i<m;i++)
    {
       cout<<freq[i]<<endl;
    }
    
    return 0;
}
