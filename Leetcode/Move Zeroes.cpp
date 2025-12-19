// هذا الملف يحتوي على عدّة حلول
// ملاحظة : الحلول وصلت لها بالتدريج ، يعني أول فكرة إجت ببالي تعقيدها الزمني كبير ، بعدين بدأت أفكّر بحل تعقيده الزّمني أقل
// هدفنا نوصل لأنظف كود لحل المشكلة -> " optimized solution "
// Time complexity : O(n^2)
// Runtime = 960 ms , Memory = 23.90 MB

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[j]==0 && j != n-1 ) // swaping 
                // ( بمعنى -> shifting zero to right " end of array")
                {
                    int x=nums[j+1];
                    nums[j+1]=0;
                    nums[j]=x;
                }
            }
        }
        
    }
};

---------------------------------------------------------------------------

// حل آخر 
// Time complexity : O(n)
// Runtime = 4 ms , Memory = 23.86 MB

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int x=0;
        
        for(int i=0;i<n;i++)
        {
            if(nums[i] !=0)
            {
                nums[x]=nums[i];
                x++;
            }
        }

        while(x<n)
        {
            nums[x]=0;
            x++;
        }
        
    }
};

----------------------------------------------------------------
// حل آخر وهو المطلوب 
// Time complexity : O(n)
// Runtime = 0 ms , Memory = 23.79 MB

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int x=0;

        for(int i=0;i<n;i++)
        {
            if(nums[i] !=0)
            {
                swap(nums[x],nums[i]);
                x++;
            }
        }

    }
};
