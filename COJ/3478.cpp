#include <bits/stdc++.h>
using namespace std;

string num;

string solve(string n) {
    reverse(n.begin(),n.end());
    string r = "";

    while(n.size() % 3)
        n += "0";

    for(int i=0;i<n.size()/3;i++) {
        string bloque = n.substr(3*i,3);
        if(bloque == "000") r += "0";
        if(bloque == "100") r += "1";
        if(bloque == "010") r += "2";
        if(bloque == "110") r += "3";
        if(bloque == "001") r += "4";
        if(bloque == "101") r += "5";
        if(bloque == "011") r += "6";
        if(bloque == "111") r += "7";
    }
    reverse(r.begin(),r.end());

    return r;
}

int main() {
    cin >> num;
    cout << solve(num) << "\n";

    return 0;
}
