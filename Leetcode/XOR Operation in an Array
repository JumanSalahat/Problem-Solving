class Solution {
public:
    int xorOperation(int n, int start) {
        int num[n];
        int result=start; // since, num[0]=start+(2*0)=start 
        for(int i=1;i<n;i++) // We start with index : i=1 ---> result=num[0]=start
        {
            num[i]=start+2*i;
            result=result^num[i]; //  ^ : this operation means XOR 
        }
        return result;
    }
};
