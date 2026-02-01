class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int x=1; // لإنّه أول عنصر تلقائياً مميّز وغير مكرّر
       for(int i=1;i<nums.size();i++)
       {
        // بفحص إذا العنصر التالي (لا يساوي) العنصر السابق
        // إذا لا يساوي : بضيفه للمصفوفة ، إذا بساوي بهمله وما بضيفه
        // أنا هون بشتغل على نفس المصفوفة
         if(nums[i] != nums[i-1]) {nums[x]=nums[i]; x++; }
       }
       return x; // عدد العناصر الفريدة في المصفوفة
    }
};
