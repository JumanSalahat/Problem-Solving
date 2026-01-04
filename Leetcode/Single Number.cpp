class Solution {
public:
    int singleNumber(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int x=nums[n-1];
       for(int i=0;i<n-1;i++)
       {
          if(nums[i]==nums[i+1]) i++;
          else { x=nums[i]; break; }
       }
       return x;
    }
};
