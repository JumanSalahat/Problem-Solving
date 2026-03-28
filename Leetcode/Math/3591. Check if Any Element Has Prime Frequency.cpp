class Solution {
public:
    bool isPrime(int n) 
    {
       if (n <= 1) return false;

       for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            return false;
        }

        return true;
    }

    bool checkPrimeFrequency(vector<int>& nums) {
       int freq[101]={0};
       for(int i=0;i<nums.size();i++) freq[nums[i]]++;
       for(int i=0;i<nums.size();i++) if(isPrime(freq[nums[i]])==true) return true;

       return false;
    }
};
