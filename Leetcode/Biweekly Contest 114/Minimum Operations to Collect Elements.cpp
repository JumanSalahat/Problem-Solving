class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        set<int> x;
        int c=0;
        for(int i = n-1; i>=0 ; i--)
        {
           if(nums[i]<=k)
           {
              x.insert(nums[i]);
           }
            c++;
            if(x.size()==k) break;
        }
       return c;
    }
};
