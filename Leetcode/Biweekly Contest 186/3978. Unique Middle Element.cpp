class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int middle = nums[n/2]; // since index start with 0
        for(int i=0;i<n;i++)
        {
            if(i!=n/2 && nums[i]==nums[n/2])
            return false;
        }
        return true;
    }
};
