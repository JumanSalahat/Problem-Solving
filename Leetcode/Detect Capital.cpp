class Solution {
public:
    bool detectCapitalUse(string word) {
        string a="";
        string b="";
        string s="";
        s+=word[0];

        for(int i=0;i<word.size();i++)
        {
            a+=toupper(word[i]);
            b+=tolower(word[i]); 
            if(i>0) s+=tolower(word[i]);   
        }

        return word==a || word==b || word==s;
    }
};
