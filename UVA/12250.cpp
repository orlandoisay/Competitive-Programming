#include <bits/stdc++.h>
using namespace std;

int k;
string S;

int main() {

    while(true) {
        cin >> S;

        if(S == "#") break;

        cout << "Case " << ++k << ": ";

        if(S == "HELLO") cout << "ENGLISH";
        else if(S == "HOLA") cout << "SPANISH";
        else if(S == "HALLO") cout << "GERMAN";
        else if(S == "BONJOUR") cout << "FRENCH";
        else if(S == "CIAO") cout << "ITALIAN";
        else if(S == "ZDRAVSTVUJTE") cout << "RUSSIAN";
        else cout << "UNKNOWN";

        cout << "\n";
    }

    return 0;
}
