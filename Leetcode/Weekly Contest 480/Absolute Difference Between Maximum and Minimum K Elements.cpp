class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        // to find the sum of the k largest elements in the array 
        int SumLargest=0;
        int x=n-1;
        for(int i=1;i<=k;i++)
        {
           SumLargest+=nums[x];
           x--;
        }

         // to find the sum of the k smallest elements in the array 
        int SumSmallest=0;
        int y=0;
        for(int i=1;i<=k;i++)
        {
           SumSmallest+=nums[y];
           y++;
        }

        return abs(SumLargest - SumSmallest);
    }
};
