class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result(n);
        int MaxCandy=1;
        for(int i=0;i<n;i++) // أوجد أكبر كميّة حلوى مع الأطفال
        {
            MaxCandy=max(MaxCandy,candies[i]);
        }

        for(int i=0;i<n;i++) // إذا قمنا بزيادة الحلوى الإضافية لكل طفل
        {
           if( ( candies[i] + extraCandies ) < MaxCandy ) result[i]=false; // (بعد الزيادة إذا أصبحت كمية الحوى أقل من (أكبر كمية في المصفوفة الأصلية -> false
           else result[i]=true; // (بعد الزيادة إذا أصبحت كمية الحوى أكبر أو تساوي (أكبر كمية في المصفوفة الأصلية -> true
        }
        return result;
    }
};
