class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        // تمت معالجة الحالات الخاصة ( حالتين ) 
        // وهما : إذا كان العدد المفقود أول المصفوفة ، أو إذا كان آخرها
        if(nums[0]==1) return 0 ; // إذا كان أوّل المصفوفة
        for(int i=0;i<n-1;i++)
        {
            if(nums[i] != nums[i+1]-1) return i+1; // i+1 -> لإنه الإندكس للمصفوفة ببدأ من 0
        }
        return n; // إذا كان آخر المصفوفة
    }
};
