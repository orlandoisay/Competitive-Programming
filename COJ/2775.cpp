#include <bits/stdc++.h>
using namespace std;

int N;
string str;

bool isvowel(char c) {
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    return false;
}

int main() {
    cin >> N;
    while(N--) {
        cin >> str;

        if(isvowel(str[0]))
            cout << str + "cow\n";
        else
            cout << str.substr(1,str.size()-1) + str.substr(0,1) + "ow\n";
    }
    return 0;
}
