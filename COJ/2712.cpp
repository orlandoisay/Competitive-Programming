#include <bits/stdc++.h>
using namespace std;

int N;
string S;
map <string,int> M;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    cin >> N;
    while(N--) {
        cin >> S >> S;
        M[S]++;
    }
    cin >> N;
    while(N--) {
        cin >> S >> S;
        cout << M[S] << "\n";
    }
    return 0;
}
