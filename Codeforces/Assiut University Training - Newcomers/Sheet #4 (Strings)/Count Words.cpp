#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    bool word=false;
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]>='a' && s[i]<='z')
        {
            if(word==false) c++;
            word=true;
        }
        else word= false;
    }
    cout<<c;
    return 0;
}
