#include <bits/stdc++.h>
using namespace std;

string a,b;

int main() {
    cin >> a >> b;
    reverse(a.begin(),a.end());

    if(a!=b)
        cout << "NO";
    else
        cout << "YES";
    return 0;
}