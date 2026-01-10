class Solution {
public:
    string reverseStr(string s, int k) {
        if(s.size()<=1) return s;
    
        for(int i=0;i<s.size();i+=2*k)
        {
           if( s.size()-i <k) 
           { 
             reverse(s.begin()+i, s.end());
             break; 
           }
           
           reverse(s.begin()+i,s.begin()+i+k);
        }
        

        return s;
    }
};
