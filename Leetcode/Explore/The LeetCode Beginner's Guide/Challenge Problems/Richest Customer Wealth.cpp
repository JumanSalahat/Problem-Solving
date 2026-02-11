class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int i,j;
        int m=accounts.size();
        int n=accounts[i].size();

        int ans=1; // since,1 <= accounts[i][j] <= 100
        for(i=0;i<m;i++)
        {
            int sum=0;
            for(j=0;j<n;j++)
            sum+=accounts[i][j];

            ans=max(ans,sum);
        }

        return ans;
    }
};
