class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        long long y=1;
        while(n)
        {
           if(n%10 != 0)
           {
              x+=(n%10)*y; // مُبدعة جُمان 
              sum+=n%10;
              y*=10; // اللهمّ بارك
           } 
           n/=10;
        }
        return x*sum;
    }
};
