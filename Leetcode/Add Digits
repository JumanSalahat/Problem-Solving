// إعادة صياغة السؤال : جمع الأرقام حتى يبقى رقم واحد
class Solution {
public:
    int addDigits(int num) {
    while(num>9)
    {
        long long sum=0;
        while(num)
        {
          sum+=num%10;
          num/=10;  
        }
        num=sum;
    }
    return num;
    }
};
