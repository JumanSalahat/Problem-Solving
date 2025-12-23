class Solution {
public:
    void reverseString(vector<char>& s) {
     long long n= s.size()-1;
     vector<char> rev = s;
      for(long long i=0;i<s.size();i++) 
      {
        s[i]=rev[n];
        n--;
      } 
    }
};
