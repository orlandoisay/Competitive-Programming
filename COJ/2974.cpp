#include <bits/stdc++.h>
using namespace std;

int n,y=1;
string strord,l[25];
int order[26];

bool ordfx(string a,string b) {
    int limit = min(a.size(),b.size());

    for(int i=0;i<limit;i++){
        if(order[a[i]-'A']<order[b[i]-'A'])
            return true;
        else if(order[a[i]-'A']>order[b[i]-'A'])
            return false;
    }
    return a.size()<b.size();
}

int main() {
    while(true) {
        cin >> n;
        if(!n)
            break;
        cin >> strord;

        for(int i=0;i<26;i++)
            order[strord[i]-'A']=i;

        for(int i=0;i<n;i++)
            cin >> l[i];

        sort(l,l+n,ordfx);

        cout << "year " << y++ << "\n";

        for(int i=0;i<n;i++)
            cout << l[i] <<"\n";
    }

    return 0;
}
