class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int n = t.size();
        char x = t[n-1];
        for(int i=0;i<n-1;i++)
        {
            if(t[i] != s[i]) 
            {
               x = t[i];
               break; // في فائدة لبريك بس مش عارف شو هي
               // في -> case -> بضرب بدونها 
               // أنا إجا ببالي أحطها هيك كنوع من السرعة لإنه فقط في اختلاف بحرف واحد ، فخلاص أول ما يلاقيه يطلع
            }
        }
        return x;
    }
};
