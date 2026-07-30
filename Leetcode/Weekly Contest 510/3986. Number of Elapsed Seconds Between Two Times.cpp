class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int hour = ((endTime[0]-'0')*10 + endTime[1]-'0') - ( (startTime[0]-'0')*10 + startTime[1]-'0');
        int minute = ( (endTime[3]-'0')*10 + endTime[4]-'0') - ( (startTime[3]-'0')*10 + startTime[4]-'0');
        int seconed = ( (endTime[6]-'0')*10 + endTime[7]-'0') - ( (startTime[6]-'0')*10 + startTime[7]-'0');
        int ans = hour*60*60 + minute*60 + seconed;
        return ans;
    }
};
