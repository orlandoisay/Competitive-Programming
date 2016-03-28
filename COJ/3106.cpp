#include <bits/stdc++.h>
using namespace std;

bool pal(string s) {
    for(int i=0;i<s.size()/2;i++)
        if(s[i]!=s[s.size()-1-i])
            return false;
    return true;
}

string a,b;

int main() {
    cin >> a >> b;

    if(pal(a+b))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
