#include <bits/stdc++.h>
using namespace std;

int n;
string a,b;

void sweep(string &s) {
    for(int i=0;i<s.size();i++) {
        if(s[i]=='1')
            s[i]='0';
        else
            s[i]='1';
    }
}

int main() {
    cin >> n;
    cin >> a >> b;
    n %= 2;

    if(n)
        sweep(a);

    if(a==b)
        cout << "Deletion succeeded\n";
    else
        cout << "Deletion failed\n";
    return 0;
}
