class Solution {
public:
    string defangIPaddr(string address) {
       string result="";
       for(long long i=0;i<address.size();i++)
       {
         if(address[i]=='.') result+="[.]";
         else result+=address[i];
       }
       return result;
    }
};
