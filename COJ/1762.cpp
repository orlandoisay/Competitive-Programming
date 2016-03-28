#include <bits/stdc++.h>
using namespace std;

string a,b;
int r,q;
bool c=true;

int main() {
    cin >> a >> b;

    for(int i=0;i<a.size();i++) {
        if(!c)
            break;
        for(int j=0;j<b.size();j++) {
            if(a[i]==b[j]) {
                c=false;
                r=i,q=j;
                break;
            }
        }
    }

    for(int i=0;i<q;i++) {
        for(int j=0;j<a.size();j++)
            if(j == r)
                cout << b[i];
            else
                cout << ".";
        cout << "\n";
    }
    cout << a << "\n";
    for(int i=q+1;i<b.size();i++) {
        for(int j=0;j<a.size();j++)
            if(j == r)
                cout << b[i];
            else
                cout << ".";
        cout << "\n";
    }

    return 0;
}
