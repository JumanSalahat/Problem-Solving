class Solution {
public:
    bool isPerfectSquare(int num) {
       double x = sqrt(num);
       return x-int(x)==0; 
    }
};
