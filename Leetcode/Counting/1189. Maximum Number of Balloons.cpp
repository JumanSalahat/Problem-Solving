class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        int freq[26]={0};
        for(int i=0;i<n;i++)
        {
            freq[text[i]-'a']++;
        }
        int x = min(freq[11],freq[14]);
        int y = min({ freq[0] , freq[1] , freq[13] });
        x/=2;
        int ans=min(x,y);
        return ans;

    }
};
