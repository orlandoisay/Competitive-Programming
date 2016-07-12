#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, L, S, P;
    string N;
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin >> T;

    while(T--) {
        cin >> N;
        L = N.size();
        reverse(N.begin(),N.begin()+L);
        S = 0;
        if(N[0] == '1') S+= 1;
        P = 1;
        for(int i=1;i<L;i++) {
            P *= 2;
            P %= 3;
            if(N[i] == '1') {
                S += P;
                S %= 3;
            }
        }
        if(S == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
