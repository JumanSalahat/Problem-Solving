class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end()); // ترتيب تصاعدي
        int n = nums.size();
        int Max = nums[n-1]; 
        // آخر عنصر في المصفوفة أصبح هو أكبر عنصر ( بعد الترتيب التصاعدي ())

        // لجعل عناصر المصفوفة متساوية
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum = sum + ( Max - nums[i] );
            //nums[i]= nums[i] + ( Max-nums[i] ); // خطوة إضافية مش مطلوبة بالسؤال
            // إنّه عملت عناصر المصفوفة متساوية
            // بس حذفتها صار الـ --> runtime = 0  
            // يعني قلّ .. معها بكون -> 7 
            // 7 ms
    }
         return sum;
    }
};
