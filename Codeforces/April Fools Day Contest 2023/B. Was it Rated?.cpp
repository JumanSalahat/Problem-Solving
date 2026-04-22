#include <iostream>
using namespace std;

// The input to the problem represents a Codeforces contest ID.
// Out of the first 25 Codeforces contests,
// the only unrated ones had IDs 15, 20, and 21.

// So we output NO if n∈{15,20,21}, and YES otherwise.

int main() {
    short n; cin>>n;
    if(n==15 || n==20 || n==21) cout<<"NO\n";
    else cout<<"YES\n";
    return 0;
}
