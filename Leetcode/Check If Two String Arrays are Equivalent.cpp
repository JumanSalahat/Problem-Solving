class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="",x="";
        for(int i=0;i<word1.size();i++) s+=word1[i];
        for(int i=0;i<word2.size();i++) x+=word2[i];
        return s==x;
    }
};
