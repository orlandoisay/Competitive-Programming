#include <bits/stdc++.h>
using namespace std;

int n,c[26];
string str;
int mx,imx,rep;

int toNumber(string s) {
    int r=0;
    for(int i=0;i<s.size();i++) {
        r*=10;
        r+=(s[i]-'0');
    }
    return r;
}

int dif(int x) {
    return (x+22)%26;
}

int main() {
    getline(cin,str);
    n = toNumber(str);

    while(n--) {
        getline(cin,str);
        memset(c,0,sizeof(c));
        for(int i=0;i<str.size();i++)
            if(isalpha(str[i]))
                c[str[i]-'A']++;
        mx=c[0];
        imx=0;
        rep=0;
        for(int i=1;i<26;i++) {
            if(c[i]==mx)
                rep=1;
            if(c[i]>mx) {
                mx = c[i];
                imx = i;
                rep = 0;
            }
        }
        if(rep) {
            cout << "NOT POSSIBLE\n";
        }
        else {
            cout << dif(imx) << " ";
            for(int i=0;i<str.size();i++) {
                if(isalpha(str[i]))
                    str[i]=((26+(str[i]-'A')-dif(imx))%26)+'A';
                cout << str[i];
            }
            cout << "\n";
        }
    }
    return 0;
}
