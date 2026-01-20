//Runtime = 0 ms , Memory = 13.28 MB
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0; // متغيّر لحساب عدد أرقام كل عنصر في المصفوفة
            while(nums[i])
            {
               c++;
               nums[i]/=10;        
            }
            
            if(c%2==0)  result++;
        }
        return result; // عدد عناصر المصفوفة التي تتكون من عدد زوجي من الأرقام =)
    }
};
