class Solution {
public:
    int climbStairs(int n) {
    // جداً بتشبه فكرة --> Fibonacci Number
    if (n<=2) return n;

    int result;
    int x=1,y=2;
    for(int i=3;i<=n;i++)
    {
        result = x+y;
        x=y;
        y = result;   
    }
    return result;
    }
};
