class Solution {
public:
    int dayOfYear(string date) {
        int x = (date[5]-'0') * 10 + (date[6]-'0');
        int y = (date[8]-'0') * 10 + (date[9]-'0');
        int z = (date[0]-'0') * 1000 + (date[1]-'0') * 100 +  (date[2]-'0') * 10 + (date[3]-'0');
        if(x==2) y+=31;
        else if(x==3) y+=59;
        else if(x==4) y+=90;
        else if(x==5) y+=120;
        else if(x==6) y+=151;
        else if(x==7) y+=181;
        else if(x==8) y+=212;
        else if(x==9) y+=243;
        else if(x==10) y+=273;
        else if(x==11) y+=304;
        else if(x==12) y+=334;

        if(( (z%4==0 && z%100 != 0) || z%400 == 0) && x>2) y++; // since, February	28 (29 in leap years)

        return y;
    }
};
