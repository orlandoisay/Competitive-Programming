#include <bits/stdc++.h>
using namespace std;

string str,nw;
string mn = "{";

void check(int x,int y) {
    nw="";
    for(int i=x-1;i>=0;i--)
        nw += str[i];
    for(int i=y-1;i>=x;i--)
        nw += str[i];
    for(int i=str.size()-1;i>=y;i--)
        nw += str[i];

    mn = min(mn,nw);
}

int main() {
    cin >> str;

    for(int i=1;i<str.size();i++) {
        for(int j=i+1;j<str.size();j++) {
            check(i,j);
        }
    }

    cout << mn;
    return 0;
}
