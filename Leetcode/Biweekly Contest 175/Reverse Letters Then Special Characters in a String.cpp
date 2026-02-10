class Solution {
public:
    string reverseByType(string s) {
       string x="", y="";
       for(int i=0;i<s.size();i++)
       {
          if(s[i]>='a' && s[i]<='z') x+=s[i];
          else y+=s[i];
       } 

       reverse(x.begin(),x.end());
       reverse(y.begin(),y.end());

       int a=0, b=0;
       for(int i=0;i<s.size();i++)
       {
          if(s[i]>='a' && s[i]<='z') { s[i]=x[a]; a++; }
          else { s[i]=y[b]; b++;}
       }

       return s; 
    }
};
