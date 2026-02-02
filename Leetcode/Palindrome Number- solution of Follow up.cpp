// Follow up: Could you solve it without converting the integer to a string?
class Solution {
public:
    bool isPalindrome(int x) {
       long long n=x;
       long long y=0;
       if(x<0) return false;
       while(n)
       {
           y=y*10+(n%10);
           n/=10;
       }
       return x==y;
      
    }
};
