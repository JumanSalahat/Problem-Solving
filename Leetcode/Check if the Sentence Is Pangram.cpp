class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> x;
        int n = sentence.size();
        for(int i=0;i<n;i++)
        {
            x.insert(sentence[i]);
        }
        if(x.size()==26) return true;
        else return false;
    }
};
