#include <bits/stdc++.h>
using namespace std;

string solve(string orig) {
    reverse(orig.begin(),orig.end());
    string a,b,c;

    a = orig;
    b = "0000" + orig;
    c = "";

    int len = max(a.size(),b.size())+1, carry = 0;

    for(int i=0;i<len;i++) {
        int da=0,db=0,dc=0;
        if(i < a.size())
            da = a[i] - '0';
        if(i < b.size())
            db = b[i] - '0';
        dc = da + db + carry;
        c += ((dc%2)+'0');
        carry = dc / 2;
    }
    reverse(c.begin(),c.end());

    if(c[0]=='0')
        c = c.substr(1,len-1);
    return c;
}

string n;

int main() {
    cin >> n;
    cout << solve(n) << "\n";

    return 0;
}
