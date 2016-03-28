#include <bits/stdc++.h>
using namespace std;

int StoN(string s) {
    int r = 0;
    for(int i=0;i<s.size();i++)
        r+= s[i] - 'A' + 1;
    return r;
}

string NtoS(int x) {
    string r = "";
    while(x>26) {
        r += "Z";
        x -= 26;
    }
    r += char(x+'A'-1);
    return r;
}

int n;
string orig;

int main() {
    cin >> orig;
    n = StoN(orig);

    cout << NtoS((n)/2) << " " << NtoS((n+1)/2) << "\n";

    return 0;
}
