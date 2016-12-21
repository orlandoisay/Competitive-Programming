#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, k;

ll lsone(ll x) {
    ll r = 1;

    while(x % 2 == 0) { r++; x/=2; }

    return r;
}

int main() {
    scanf("%I64d %I64d", &n, &k);

    printf("%I64d\n", lsone(k));

    return 0;
}