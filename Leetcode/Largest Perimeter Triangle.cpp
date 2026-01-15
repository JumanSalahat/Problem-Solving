class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());           // 1) ترتيب تصاعدي
        for (int i = (int)nums.size() - 1; i >= 2; --i) {
            int a = nums[i-2], b = nums[i-1], c = nums[i];
            if (a + b > c) return a + b + c;      // 2) أول مثلث صالح من النهاية هو الأكبر
        }
        return 0;
    }
};
