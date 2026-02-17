class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] != val) 
            {
                nums[c]=nums[i];
                c++;
            }
        }

        nums.resize(c); // خطوة إضافية غير مطلوبة بالسؤال ولكن أنا مقتنع بوجودها + تعلّمتها جديد اليوم
        return c;
    }
};
