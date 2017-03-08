#include <bits/stdc++.h>
using namespace std;

int t;
string s, r[]={"one","two","three"};

int diff(string a, string b) {
    if(a.size() != b.size()) return 2;
    int x = 0;

    for(int i=0;i<a.size();i++)
        if(a[i] != b[i]) x++;

    return x;
}

int main() {
    cin >> t;

    for(int i=0;i<t;i++) {
        cin >> s;

        for(int j=0;j<3;j++) {
            if(diff(s,r[j]) <= 1)
                cout << (j+1) << "\n";
        }
    }

    return 0;
}
