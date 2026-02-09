class Solution {
public:
    int countMonobit(int n) {
        int c=1; // الصفر =)
        for(int i=1;i<=n;i++)
        {
            string s = bitset<32>(i).to_string();
            s = s.substr(s.find('1')); // مهم جداً
            char x=s[0];

            int b=0;
            for(int i=0;i<s.size();i++)
            {
                if(s[i]==x) b++;
            }

            if(b==s.size()) c++;
        }   
        return c;
    }
};
