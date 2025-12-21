class Solution {
public:
    int lengthOfLastWord(string s) {
       int c=0;
       int n=s.size();

       int x=n;
       for(int i=n-1;i>=0;i--)
       {
          if(s[i] == ' ') x--;
          else break;
       }

       for(int i=x-1;i>=0;i--)
       {
          if(s[i] != ' ') c++;
          else break;
       }
       
       return c;
    }
};
