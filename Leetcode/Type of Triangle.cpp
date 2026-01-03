class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1] <= nums[2] || nums[0]+nums[2] <= nums[1] || nums[1]+nums[2] <= nums[0]) return "none"; // ليس مثلث

        if(nums[0]==nums[1] && nums[1]==nums[2]) return "equilateral"; // متساوي أضلاع
        else if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2]) return "isosceles"; // متساوي السّاقين
        else return "scalene"; // مختلف الأضلاع
    }
};
