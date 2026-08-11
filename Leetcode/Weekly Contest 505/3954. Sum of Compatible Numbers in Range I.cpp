class Solution {
public:
// رياضياً وبتطبيق قواعد القيمة المطلقة فإنّ 
// x -> تقع بين  n-k و n+k
// بنلغي الحد إللي ممكن يطلع سالب لإنّه قيمة -> x -> دايماً موجبة
    int sumOfGoodIntegers(int n, int k) {
        int a = n-k; // الحد الأدنى
        int b = n+k; // الحد الأعلى

        int sum=0;
        for( int x = a ; x <= b ; x++ )
        {
            if( (x > 0) && ( (n&x) == 0) ) // (n&x) --> مهم جداً لازم نحطهم بين أقواس 
            sum+=x;
        }
        return sum;
    }
};
