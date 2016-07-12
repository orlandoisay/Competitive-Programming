#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define MAXN 1000
using namespace std;

ll fac[2 * MAXN + 5] = {1};

ll modInverse(ll a, ll m) {
    ll m0 = m, t, q, x0 = 0, x1 = 1;
    if(m == 1) return 0;
    while(a > 1) {
        q = a / m;
        t = m, m = a % m, a = t;
        t = x0, x0 = x1 - q * x0, x1 = t;
    }
    if(x1 < 0) x1 += m0;
    return x1;
}

ll catalan(ll n) {
    ll res;
    res = fac[2*n];
    res = (res * modInverse(fac[n+1],mod)) % mod;
    res = (res * modInverse(fac[n],mod)) % mod;
    return res;
}

ll T,N;

int main() {
    for(ll i=1;i<=2000;i++)
        fac[i] = (fac[i-1] * i) % mod;

    scanf("%lld",&T);

    while(T--) {
        scanf("%lld",&N);
        printf("%lld\n",catalan(N));
    }


    return 0;
}
