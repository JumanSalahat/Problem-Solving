class Solution {
public:
    string reverseOnlyLetters(string s) {
        string x="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') x+=s[i];
        }

        reverse(x.begin(),x.end());

        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z') 
            { 
                s[i]=x[j];
                j++; 
            } 
        }

        return s;
    }
};
