#include <bits/stdc++.h>
using namespace std;

// & : Pass by Reference : --> أي تمرّر المتغير نفسه، لا نسخة
// بدون & : Pass by Value : --> التمرير بالقيمة (نسخة)

void swap(int &x, int &y) // جميل جداً ، انتباااه --> int &x, int &y
{
    int z=x;
    x=y;
    y=z;
}

int main() {
    int x,y;
    cin>>x>>y;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
