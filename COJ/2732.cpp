#include <bits/stdc++.h>
using namespace std;

int N;
string str;

void toggle(char &c) {
    if(isupper(c))
        c = tolower(c);
    else
        c = toupper(c);
}

int main() {
    cin >> N;

    while(N--) {
        cin >> str;

        for(int i=0;i<str.size();i++)
            toggle(str[i]);

        cout << str << "\n";
    }
    return 0;
}
