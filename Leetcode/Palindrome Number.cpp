// Runtime = 7 ms , Memory = 10.94 MB
class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string result="";
        for(int i=s.size()-1;i>=0;i--)
        {
          result+=s[i];
        }
        return result==s;
    }
};
//  ارجعي فكّري بـ --> Follow up --> الموجودة بنهاية نَصّ السّؤال
