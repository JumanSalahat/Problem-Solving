/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{   string Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int Q;
    string s;
    cin>>Q;
    cin>>s;
    
    // Q=1 --> Encryption : Original -> Key
    // Q=2 --> Decryption : Key -> Original
    
    if(Q==1) // Encryption : Original -> Key
    {
        for(int i=0;i<s.size();i++)
        {   
            for(int j=0;j<Original.size();j++)
            if(s[i]==Original[j])
            {
                s[i]=Key[j];
                break;
            }
            
        }
    }
    
    else if(Q==2) // Decryption : Key -> Original
    {
        for(int i=0;i<s.size();i++)
        {   
            for(int j=0;j<Key.size();j++)
            if(s[i]==Key[j])
            {
                s[i]=Original[j];
                break;
            }
            
        }
    }
    cout<<s;
    return 0;
}