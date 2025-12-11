/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// حل آخر
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++)  cin>>a[i]; // أبدأ تخزين قيم من إنديكس 1 وأهمل إنديكس 0
    // هيك ما بحتاج لعملية الطرح والجمع إللي عملتها بالحل الأول
    // ولكن بهالطريقة أنا بستهلك ميموري أكثر ، ولو إنّه ممكن يكون شيء بسيط =/
    // يعني 4 بايت ,, تمام الوضع =)

    int p[n];
    for(int i=1;i<=n;i++) p[a[i]]=i;

    for(int i=1;i<=n;i++) cout<<p[i]<<" ";
    return 0;
}