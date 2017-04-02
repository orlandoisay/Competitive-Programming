#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll T, a, b, c;

ll pow2(ll x) {
    if(!x) return 1;
    return 2 * pow2(x-1);
}

ll readIP() {
    ll v[4];
    scanf("%lld.%lld.%lld.%lld",&v[0],&v[1],&v[2],&v[3]);

    return  v[0] * pow2(24) +
            v[1] * pow2(16) +
            v[2] * pow2(8) +
            v[3];
}

int main() {
    scanf("%lld", &T);

    while(T--) {
        a = readIP();
        b = readIP();
        c = readIP();

        if(b < a)
            swap(a,b);

        printf("%s\n", (a <= c && c <= b) ? "YES" : "NO");
    }
    return 0;
}
