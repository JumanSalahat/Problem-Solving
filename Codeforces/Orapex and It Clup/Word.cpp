// If the given word s has strictly more uppercase letters, 
// make the word written in the uppercase register
// --> فقط إذا كان عدد الحروف الكبيرة أكبر من الحروف الصغيرة نحوّل كل حروف الكلمة لحروف كبيرة
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int lower=0,upper=0;
    // مرحلة الفحص
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z') lower++;
        else if(s[i]>='A' && s[i]<='Z') upper++;
    }
    
    // مرحلة التعديل
    for(int i=0;i<s.size();i++)
    {
        if(upper > lower) s[i]=toupper(s[i]);
        else s[i]=tolower(s[i]);
    }
    
    cout<<s;
    return 0;
}
