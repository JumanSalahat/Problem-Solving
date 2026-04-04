class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int n = magazine.size();
       int freq1[26]={0};
       for(int i=0;i<n;i++)
       {
          freq1[magazine[i]-'a']++;
       }

       int m = ransomNote.size();
       int freq2[26]={0};
       for(int i=0;i<m;i++)
       {
         freq2[ransomNote[i]-'a']++;
       }

       for(int i=0;i<m;i++)
       {
          if ( freq2[ransomNote[i]-'a'] > freq1[ransomNote[i]-'a'] ) //  مهم 
           return false;
       }

       return true;
    }
};
