/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    
    string x="hello"; int y=0 ; 
    int c=0; 
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==x[y]) { y++; c++; }
    }
    
    if(c==5) cout<<"YES";
    else cout<<"NO";
    return 0;
}