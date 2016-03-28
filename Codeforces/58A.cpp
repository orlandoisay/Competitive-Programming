#include <bits/stdc++.h>
using namespace std;

string str, h = "hello";

int main() {
    cin >> str;

    for(int i=0,j=0;i<str.size();) {
        if(str[i] == h[j])
            j++;
        i++;

        if(j == 5) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}