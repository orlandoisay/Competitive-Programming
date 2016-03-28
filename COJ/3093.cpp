#include <bits/stdc++.h>
using namespace std;

int r=1;
string w;
int main() {
    cin >> w;

    for(int i=0;i<w.size();i++)
        r = (r*(w[i]-'A'+1)) % 26;

    if(r > 9)
        cout << r << "\n";
    else
        cout << "0" << r << "\n";
    return 0;
}
