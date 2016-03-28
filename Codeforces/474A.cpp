#include <bits/stdc++.h>
using namespace std;

char I;
int delta;
string str,keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main() {
    cin >> I >> str;
    delta = I == 'R' ?  -1 : 1;

    for(int i=0;i<str.size();i++) {
        cout << keyboard[keyboard.find(str[i]) + delta];
    }

    return 0;
}