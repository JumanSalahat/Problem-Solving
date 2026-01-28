class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size() -1;
        int x;
        for(int i=n;i>=0;i--)
        {
            if(num[i]%2==1) { x=i; break; }
        }
        return num.substr(0,x+1);
    }
};
