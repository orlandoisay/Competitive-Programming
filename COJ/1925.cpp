#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll invert(ll x) {
    ll r = 0;

    while(x) {
        r = (r*10) + (x%10);
        x /= 10;
    }

    return r;
}

ll n,v[1000001];

int main() {
    scanf("%lld",&n);

    for(int i=0;i<n;i++) {
        scanf("%lld",&v[i]);
        v[i] = invert(v[i]);
    }

    sort(v,v+n);

    for(int i=0;i<n;i++)
        printf("%lld\n",v[i]);

    return 0;
}
