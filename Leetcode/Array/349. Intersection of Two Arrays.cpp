class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            if(nums1[i]==nums2[j]) { nums.push_back(nums1[i]); break; }
        }

        sort(nums.begin(),nums.end());
        vector<int>ans; 
        for(int i=0;i<nums.size();i++)
        if(i==0 || nums[i] != nums[i-1]) ans.push_back(nums[i]); 
        return ans;
    }
};
