#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    
    int start=0;
    for(int i=0;i<=s.size();i++) // حطيت مساواة عند -> s.size( ) -> اعتبرت إنه في كمان مسافة آخر النصّ عشان أعكس آخر كلمة
    {
       if( i==s.size() || s[i] == ' ') // ترتيب الشرطين هيك فقط ، العكس بعطي إيرور
       {
           reverse(s.begin()+start,s.begin()+i);
           start=i+1; // +1 هاي من المسافة
       }   
    }
    cout<<s;
    return 0;
}
