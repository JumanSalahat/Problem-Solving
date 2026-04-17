class Solution {
public:
    bool isFascinating(int n) {
        int x=2*n;
        int y=3*n;

        string s1=to_string(n);
        string s2=to_string(x);
        string s3=to_string(y);

        string ans=s1+s2+s3;
        sort(ans.begin(),ans.end());

        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!= (i+'1')) return false; // انتباه لمّا نقارن char بنقارنه مع char
        }

        return true;
    }
};
