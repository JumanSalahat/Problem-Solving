class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        short n = nums.size();
        int freq[101]={0};
        for(short i=0;i<n;i++) freq[nums[i]]++;

        for(short i=0;i<n;i++) 
        {
           if(freq[nums[i]] == 1 && nums[i]%2==0) return nums[i];
        }

        return -1;
    }
};
