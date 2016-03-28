#include <bits/stdc++.h>
using namespace std;

int t;
string a,b;

int main() {
    cin >> t;

    while(t--) {
        cin >> a >> b;
        int r=0;

        for(int i=0;i<max(a.size(),b.size());i++) {
            if(a[i]!=b[i]) {
                r++;
            }
        }
        cout << r << "\n";

    }
    return 0;
}
