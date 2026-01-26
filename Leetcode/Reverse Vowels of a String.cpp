class Solution {
public:
    string reverseVowels(string s) {
        string x="";
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
           x+=s[i];
        }

        int n=x.size()-1;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U') 
           { s[i]=x[n]; n--; }
        }
        
        return s;
    }
};
