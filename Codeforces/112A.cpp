#include <bits/stdc++.h>
using namespace std;

string a,b;

int main() {
    cin >> a >> b;

    for(int i=0;i<a.size();i++) {
        if(isupper(a[i]))
            a[i]+=32;
        if(isupper(b[i]))
            b[i]+=32;
    }

    if(a<b) {
        cout << "-1";
    }
    else if(a==b) {
        cout << "0";
    }
    else {
        cout << "1";
    }
}