class Solution {
public:
    string largestEven(string s) {
        int n=s.size();
        if(s[n-1]=='2') return s;
        int x=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='2') x=i;
        }

        string ans="";
        for(int i=0;i<=x;i++)
        {
            ans+=s[i];
        }
        return ans;
    }
};
