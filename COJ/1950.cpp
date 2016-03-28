#include <bits/stdc++.h>
using namespace std;

string str;

bool isVowel(char c) {
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

bool acceptable(string s) {
    int l = (int)s.size();
    bool res = false;
    for(int i=0;i<l-2;i++) {
        if((isVowel(s[i]) && isVowel(s[i+1]) && isVowel(s[i+2])) ||
           (!isVowel(s[i]) && !isVowel(s[i+1]) && !isVowel(s[i+2])))
            return false;
    }
    for(int i=0;i<l-1;i++)
        if(s[i] == s[i+1] && s[i] != 'e' && s[i] != 'o')
            return false;
    for(int i=0;i<l;i++)
        if(isVowel(s[i]))
            res = true;
    return res;
}

int main() {
    while(true) {
        cin >> str;
        if(str == "end")
            break;
        cout << "<" << str << "> ";
        if(acceptable(str))
            cout << "is acceptable.\n";
        else
            cout << "is not acceptable.\n";
    }
    return 0;
}
