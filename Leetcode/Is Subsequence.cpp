class Solution {
public:
    bool isSubsequence(string s, string t) {
      int x=s.size();
      int j=0;
      for(int i=0;i<t.size();i++)
      {
         if(t[i]==s[j]) j++;
      }
      if(j==x) return true;
      else return false;
    }
};
// هذا السؤال فكرته مثل فكرة سؤال -> Subsequence String -> Codeforces -> Assiut University Training - Newcomers -> Sheet #4 (Strings)
// ★ ولكن هون حلّيته بطريقة مختلفة (أفضل وأعـمّ ) ★
// ارجعي لـ -> ✵Follow up✵ -> فكّري فيه <- الموجودة في نهاية نصّ السؤال  
