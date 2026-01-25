class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n = nums.size();
        int odd[n], even[n];
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
           if(i%2==0) { even[x]=nums[i]; x++; }
           else { odd[y]=nums[i]; y++;}
        }
        
        sort(even,even+x);
        sort(odd,odd+y, greater<int>());
        x=0,y=0;
         
         for(int i=0;i<n;i++)
        {
           if(i%2==0) { nums[i]=even[x]; x++; }
           else { nums[i]=odd[y]; y++;}
        }

        return nums;
    }
};
