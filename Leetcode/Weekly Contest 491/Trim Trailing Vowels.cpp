class Solution {
public:
    string trimTrailingVowels(string s) {
        string ans="";
        int n=s.size();

        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i] =='u') c++;
            else break;
        }

        int x=n-c;
        for(int i=0;i<x;i++) ans+=s[i];

        return ans;
    }
};
