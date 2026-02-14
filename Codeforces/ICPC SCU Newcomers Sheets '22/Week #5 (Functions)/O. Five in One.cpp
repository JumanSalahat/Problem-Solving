#include <bits/stdc++.h>
using namespace std;

// maximum number in the array
int Max(int n, int a[])
{
    int x=1; // since ( 1 ≤ a[i] ≤ 100 )
    for(int i=0;i<n;i++) x=max(x,a[i]);
    return x;
}

// minimum number in the array
int Min(int n, int a[])
{
    int y=100; // since ( 1 ≤ a[i] ≤ 100 )
    for(int i=0;i<n;i++) y=min(y,a[i]);
    return y;
}

// prime numbers in the array
int Prime(int n, int a[])
{
    int c=0;
    for(int i=0;i<n;i++) 
    {
       if(a[i]==1) continue;
       if(a[i]==2) { c++; continue; }
     
       bool f=true; // =) ما اقتنعت فيها كثير بس إنه بداية نفترض إنه العدد أولي 
       for(int j=2;j*j<=a[i];j++)
       {
           if(a[i]%j == 0) { f=false; break; }
       }
       if(f==true) c++;
    }
    
    return c;
}

// palindrome numbers in the array
int Palindrome(int n, int a[])
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        string s = to_string(a[i]);
        string t = s;
        reverse(t.begin(),t.end());
        if(t==s) c++;
    }
    
    return c;
}

// the number that has the maximum number of divisors
int Max_Divisors(int n,int a[])
{
    int ans = 0;
    int max_divisor=a[0]; 
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=1;j<=a[i];j++)
        {
            if( a[i]%j == 0) c++;
        }
        
       /* if(c>=ans) max_divisor=max(max_divisor,a[i]);
        ans=max(ans,c);*/
        
        if (c > ans)
        {
           ans = c;
           max_divisor = a[i];
        }
        
        else if (c == ans)
        {
            max_divisor = max(max_divisor, a[i]);
        }
 
    }
    
    return max_divisor;
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"The maximum number : "<<Max(n,a)<<endl;
    cout<<"The minimum number : "<<Min(n,a)<<endl;
    cout<<"The number of prime numbers : "<<Prime(n,a)<<endl;
    cout<<"The number of palindrome numbers : "<<Palindrome(n,a)<<endl;
    cout<<"The number that has the maximum number of divisors : "<<Max_Divisors(n,a)<<endl;
    return 0;
}
