class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        // notes :
        // tasks.size() → عدد الـ -> vectors -> الدّاخلية ---> this mean-> عدد الصّفوف
        // tasks[0].size() → طول أول صف → يعني عدد الأعمدة  
        
        int n=tasks.size(); //  عدد الصّفوف
        int m=tasks[0].size(); // 2 --> عدد الأعمدة 
        
        int x=0;
        int ans= tasks[0][0]+tasks[0][1]; // قيمة ابتدائية
        for(int i=0;i<n;i++)
        {
            x=0; // انتبااه ، إعادة التّصفير
            for(int j=0;j<m;j++)
            {
                x+=tasks[i][j];
            }
            ans=min(ans,x);
        }
        return ans;
    }
};
