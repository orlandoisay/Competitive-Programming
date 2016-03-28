#include <bits/stdc++.h>
using namespace std;

int x;
string s,r;

int main() {
    for(int i=1;i<=5;i++) {
        cin >> s;
        if(s.find("FBI")!=string::npos) {
            if(x)
                r += " ";
            r += (i+'0');
            x++;
        }
    }
    if(r.size())
        cout << r << "\n";
    else
        cout << "HE GOT AWAY!\n";

    return 0;
}
