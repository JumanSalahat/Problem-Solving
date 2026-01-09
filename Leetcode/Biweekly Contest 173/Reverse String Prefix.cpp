class Solution {
public:
    string reversePrefix(string s, int k) {
        string result="";
        int x=0;

        // revesing
        for(int i=k-1;i>=0;i--)
        {
            result+=s[i];
            x++;
        }

        // العناصر إللي ما بنعمل عليها -> reversing
        for(int i=k;i<s.size();i++)
        {
            result+=s[i];
            x++;
        }

        return result;
    }
};
