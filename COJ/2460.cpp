#include <bits/stdc++.h>
#define ll long long
using namespace std;

string f32(ll x) {
    string res = "00000000000000000000000000000000";
    int pos = 31;

    while(x) {
        res[pos] = (x%2)+'0';
        x/=2;
        pos--;
    }
    return res;
}

ll f32inv(string x) {
    ll res = 0;
    reverse(x.begin(),x.end());
    for(ll i=0,j=1;i<x.size();i++,j*=2) {
        res += (x[i] - '0') * j;
    }

    return res;
}

ll n;

int main() {
    while(scanf("%lld",&n)!=EOF) {
        string res = f32(n);
        next_permutation(res.begin(),res.end());
        printf("%lld\n",f32inv(res));
    }

    return 0;
}
