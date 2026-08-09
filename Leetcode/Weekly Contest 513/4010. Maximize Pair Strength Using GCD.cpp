class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                long long x = ( 1LL*nums[i] * nums[j]) / pow( gcd(nums[i], nums[j]),2);

                if(i != j)
                ans=max(ans,x);
            }
        }

        return ans;
    }
};
