class Solution {
public:
    bool isPowerOfThree(int n) {
    if(n<=0) return false; // مهم جداً ، هذه من قواعد الرياضيات في الأسس واللوغاريتمات
    while(n%3==0)
    {
        n/=3; // طول ما العدد بقبل القسمة على 3 دون باقِ ، اقسمه على 3
    }
    return n==1; // بحيث بالآخر 3÷3=1
    // إذا العدد = 1 إذاً -> true
    // else false
    }
};
