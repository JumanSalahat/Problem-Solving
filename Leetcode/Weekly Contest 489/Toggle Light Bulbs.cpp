class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        sort(bulbs.begin(),bulbs.end());
        int n=bulbs.size();
        vector<int> ans;

        if(n==0) return ans;

        int c=1; int x=0;
        for(int i=1;i<n;i++)
        {
            if(bulbs[i]==bulbs[i-1]) c++;
            else 
            {
                if(c%2==1) ans.push_back(bulbs[i-1]); 
                c=1;
            }
        }

        // معالجة آخر عنصر
        if(c % 2 == 1) 
            ans.push_back(bulbs[n-1]); // انتباه 

        // ليش عالجتها لحالها ؟؟ 
        // لإني بضيف على المصفوفة الجديدة بس لما يكون في تغيير بقيمة العناصر في المصفوفة
        
        // يعني مثلاً : bulbs = [1,1,2,2,2]
        // آخر رقم هو 2 
        // وعدده = 3 (فردي)
        // يعني لازم ينضاف
        // لكن ما دخلنا else -> بعده
        // لأنه ما في عنصر بعده يسبب تغيير!

        return ans;
    }
};
