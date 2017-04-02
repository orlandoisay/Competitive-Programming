#include <bits/stdc++.h>
using namespace std;

int T, N;
vector <string> L;

bool prefix(string &a, string &s) {
    if(a.size() > s.size())
        return false;

    for(int i=0;i<a.size();i++)
        if(a[i] != s[i])
            return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> T;

    while(T--) {
        cin >> N;
        L.resize(N);

        for(int i=0;i<N;i++)
            cin >> L[i];

        sort(L.begin(),L.end());

        bool R = true;

        for(int i=0;i<N-1;i++) {
            if(prefix(L[i],L[i+1])) {
                R = false;
                break;
            }
        }

        cout << (R ? "YES" : "NO") << "\n";
    }

    return 0;
}
