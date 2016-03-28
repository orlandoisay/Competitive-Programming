#include <bits/stdc++.h>
using namespace std;

string next(string original) {
    int r=0;

    for(int i=0;i<original.size();i++)
        if(original[i]=='1')
            r++;

    string res="";

    while(r) {
        res += (r%2) ? "1" : "0";
        r/=2;
    }

    reverse(res.begin(),res.end());

    return res;
}

string s;

int main() {
    cin >> s;

    while(s != "1") {
        cout << s << "\n";
        s = next(s);
    }
    return 0;
}
