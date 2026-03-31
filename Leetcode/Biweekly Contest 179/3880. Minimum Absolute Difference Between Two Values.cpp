class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> a,b;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) a.push_back(i);
            else if(nums[i]==2)  b.push_back(i); 
        }

        if(a.size()==0 || b.size()==0) return -1; // مهم

        int ans=100; // since, 1 <= nums.length <= 100
        for(int i=0;i<a.size();i++)
        {
            for(int j=0;j<b.size();j++)
            ans=min(ans,abs(a[i]-b[j]));
        }
        return ans;
    }
};
