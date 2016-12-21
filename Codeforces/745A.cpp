#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s;
set <string> p;

int main() {
    cin >> s;

    for(int i=0;i<s.size();i++) {
        string t = "";

        for(int j=i;j<s.size();j++)
            t += s[j];
        for(int j=0;j<i;j++)
            t += s[j];

        p.insert(t);
    }

    cout << p.size() << "\n";

    return 0;
}