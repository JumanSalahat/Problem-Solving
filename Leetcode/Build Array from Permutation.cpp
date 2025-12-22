// Time complexity of this solution is -> O(n)
class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};

// فكّري بسؤال -> follow up -> نكتب الحل بتعقيد زمني -> 1 -> O(1)
