class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
       // 0 OR x = x
       int ans = 0;
       for(int i=0;i<nums.size();i++)
       {
          if(nums[i] % 2 == 0) ans|=nums[i];
       } 
       return ans;
    }
};
