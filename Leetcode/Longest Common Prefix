// أعجبني ، تفكير خارج الصندوق 
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       string result=""; 
       int x=strs.size();
       sort(strs.begin(),strs.end()); // عملت ترتيب أبجدي للكلمات ( مش حروف الكلمات )
       //  بهالطريقة ( بعد الترتيب ) رح يكونوا أكثر كلمتين مختلفات بترتيب الحروف هم أول وآخر كلمة بالمجموعة
       // وأنا بدي الجزء المشترك بين جميع الكلمات .. يعني لو أوجدت الجزء المشترك بين أكثر كلمتين مختلفات بترتيب الحروف ، فأنا أوجدت المطلوب
       string first=strs[0];
       string last=strs[x-1];
       // الآن بدي أقارن حروف أول كلمة مع آخر كلمة
       int y=min(first.size(),last.size());
       for(int i=0 ; i<y;i++)
       {
        if(first[i] != last[i]) return result; // إذا الحروف غير متشابهة : 
        //   تشمل حالة إذا ما في ولا حرف متشابه لإني بالأصل عرّفت -> result -> على إنها -> empty string -> ""
        else result+=first[i]; // إذا الحروف متشابهة ضيفها على -> result
       }
       return result;
    }
};
