class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int n=nums.size();
       int even[n/2],odd[n/2];
       int x=0,y=0;
       for(int i=0;i<n;i++)
       {
          if(nums[i]%2==0) { even[x]=nums[i]; x++; }
          else { odd[y]=nums[i]; y++; }
       } 

       x=0,y=0;
       for(int i=0;i<n;i+=2)
       {
         nums[i]=even[x]; x++;
         nums[i+1]=odd[y]; y++;
       }

         return nums; 
    }
};
