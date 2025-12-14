/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.size();i++)
    {
        cout<< (a[i]-'0' ^ b[i]-'0');
    }
    return 0;
}