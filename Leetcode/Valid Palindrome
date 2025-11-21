class Solution {
public:
    bool isPalindrome(string s) {
       for(long long i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
    //----------------------------------
    string result="";
    for(long long i=0;i<s.size();i++)
        {
            if('a'<=s[i] && s[i] <='z' || '0'<=s[i] && s[i] <='9' ) result+=s[i]; 
            //   انتباه هون إنه الأعداد داخلة أيضاً
            // مذكورة بنصّ السؤال
            // " Alphanumeric characters include letters and numbers. ""
        }
    //----------------------------------
    string rev=result;
    long long y=result.size()-1;
    for(long long i=0;i<result.size();i++)
        {
            rev[i]=result[y];
            y--;
        }
    //-----------------------------------
    if(rev==result) return true ;
    else return false ;
    }
};
