#include <bits/stdc++.h>
using namespace std;

int t, mx, x;
string r, s;

int main() {
    cin >> t;

    for(int k=1;k<=t;k++) {
        mx = 0;
        for(int i=0;i<10;i++) {
            cin >> s >> x;
            if(x > mx) {
                mx = x;
                r = "";
            }
            if(x == mx) r += s + "\n";
        }
        cout << "Case #" << k << ":\n" << r;
    }

    return 0;
}
