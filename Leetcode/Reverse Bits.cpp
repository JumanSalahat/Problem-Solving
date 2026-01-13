class Solution {
public:
    int reverseBits(int n) {
        string s = bitset<32>(n).to_string();
        reverse(s.begin(),s.end());
        int result = stoi(s,nullptr,2);
        return result;
        
    }
};
