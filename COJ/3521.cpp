#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll N, IM3 = 333333336; // Inverse modular of 3

ll solve(ll X) {
    ll res = IM3;
    res = (res * (X-1)) % mod;
    res = (res * X) % mod;
    res = (res * (X+1)) % mod;
    return res;
}

int main() {
    while(scanf("%lld",&N)!=EOF)
        printf("%lld\n", solve(N));
}
