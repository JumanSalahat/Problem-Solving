#include <bits/stdc++.h>
using namespace std;
int main()
{   int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    string func;
    while(q--)
    {
        cin>>func;
        int r,l;
        if(func=="pop_back") s.pop_back();
        else if(func=="front") cout<<s.front()<<endl;
        else if(func=="back") cout<<s.back()<<endl;
        else if(func=="sort")
        {
           cin>>l>>r;
           if(l>r) swap(l,r);
           sort(s.begin()+l-1,s.begin()+r); // بنطرح 1 لإنه في السؤال اعتبر البداية 1 ، ولكن الكومبايلر بعتبر بداية السلسلة من 0
        }
        else if(func=="reverse")
        {
           cin>>l>>r;
           if(l>r) swap(l,r);
           reverse(s.begin()+l-1,s.begin()+r); // بنطرح 1 لإنه في السؤال اعتبر البداية 1 ، ولكن الكومبايلر بعتبر بداية السلسلة من 0
        }
        else if(func=="print") 
        {
            int x;
            cin>>x;
            cout<<s[x-1]<<endl; // بنطرح 1 لإنه في السؤال اعتبر البداية 1 ، ولكن الكومبايلر بعتبر بداية السلسلة من 0
        }
        else if(func=="substr")
        {
            cin>>l>>r;
           if(l>r) swap(l,r);
           cout<<s.substr(l-1,r-l+1)<<endl; // بنطرح 1 لإنه في السؤال اعتبر البداية 1 ، ولكن الكومبايلر بعتبر بداية السلسلة من 0
                                           // ونفس السبب لزيادة 1 
        }
        else if(func=="push_back")
        {
            char x;
            cin>>x;
            s.push_back(x);
        }
    }
    return 0;
}
