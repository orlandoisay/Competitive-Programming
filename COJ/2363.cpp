#include <bits/stdc++.h>
using namespace std;

string S,T;

int main() {
    cin >> S;

    T = S;
    next_permutation(S.begin(),S.end());

    if(S>T)
        cout << S << "\n";
    else
        cout << "0\n";
    return 0;
}
