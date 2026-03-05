class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> x(nums.begin(),nums.end());
        vector<int> v(x.begin(),x.end());
        int m =v.size();
        if(m<=2) return v[m-1];
        return v[m-3];
    }
};
