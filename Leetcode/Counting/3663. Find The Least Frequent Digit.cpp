class Solution {
public:
    int getLeastFrequentDigit(int n) {
        string s=to_string(n);
        int freq[10]={0}; // بنخزّن تكرار الأرقام من 0-9
        for(int i=0;i<s.size();i++)
        {
            freq[s[i]-'0']++;
        }

        int Min_freq=INT_MAX;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(freq[s[i]-'0'] < Min_freq)
            {
                 ans=s[i]-'0';
                Min_freq=freq[s[i]-'0']; 
            }  
            else if(freq[s[i]-'0'] == Min_freq)
            {
                ans=min(ans,s[i]-'0');
            }
           
        }
        return ans;

    }
};
