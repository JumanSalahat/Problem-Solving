class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n=digits.size();

       // امشي من آخر المصفوفة
       for(int i=n-1;i>=0;i--)
       {
          if(digits[i]<=8) // العنصر أقل من 9
          { 
            digits[i]++; // +1
            return digits; // رجّع الناتج
          }
          digits[i]=0; // العنصر = 9 : خلّيه 0 وكمّل 
       }
       
       // إذا كل العناصر =9 
       // معناها صارت كل العناصر =0 
       // لهيك زيد عنصر بأول المصفوفة =1
       digits.insert(digits.begin(), 1); 
       return digits; // رجّع الناتج
    }
};
