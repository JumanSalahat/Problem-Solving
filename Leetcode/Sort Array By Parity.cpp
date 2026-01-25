class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> s(n);
        int x=0;
        // ضع جميع الأعداد الزوجية أولاً
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0) { s[x]=nums[i]; x++; }
           
        }
        // ثم ضع جميع الأعداد الفردية 
        for(int i=0;i<n;i++)
        {
             if(nums[i]%2==1) { s[x]=nums[i]; x++; }
        }
        nums=s;
        return nums;
    }
};
