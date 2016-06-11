#include <bits/stdc++.h>
using namespace std;

int n, x, id[105], w[1005];
string l[105];

int main() {
    cin >> n;

    for(int i=0;i<n;i++) {
        cin >> l[i] >> x;
        x = abs(x);

        id[i] = x;
        w[x] = 1 - w[x];
    }

    cout << "FOREVER ALONE ones:\n";

    for(int i=0;i<n;i++) {
        if(w[id[i]] == 1)
            cout << l[i] << "\n";
    }

    return 0;
}
