// هذا الملف يحتوي على 3 نماذج من الحل وبوقت تنفيذ مختلف واستهلاك ذاكرة مختلف  (الاختلاف بالحل بسيط )
// Runtime = 8 ms , Memory = 13.40 MB
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> result(2*n);
       int x=0; int y=n;
       for(int i=0;i<result.size();i++)
       {
          if(i%2==0) { result[i]=nums[x]; x++; }
          else { result[i]=nums[y]; y++; }
       } 
       return result;
    }
};
---------------------------------------------------------
// Runtime = 4 ms , Memory = 13.52 MB
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> result(2*n);
       int x=0; int y=n;

       // قيم -> x
       for(int i=0;i<2*n;i+=2)
       {
          result[i]=nums[x];
          x++; 
       } 
        
       // قيم -> y
       for(int i=1;i<2*n;i+=2)
       {
          result[i]=nums[y];
          y++;
       } 
       return result;
    }
};
----------------------------------------------------------------
// Runtime = 0 ms , Memory = 13.55 MB
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> result(2*n);
       for(int i=0;i<n;i++)
       {
          result[2*i] = nums[i];
          result[2*i+1] = nums[i+n];
       }
       return result;
    }
};
