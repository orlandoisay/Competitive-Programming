#include <bits/stdc++.h>
#define ll long long

ll T,N,C[500005];

void init() {
    for(ll i=2;i<=500000;i++)
        C[i]=1;
    for(ll i=2;i<=250000;i++) {
        for(ll j=2*i;j<=500000;j+=i)
            C[j]+=i;
    }
}

int main() {
    init();
    scanf("%lld",&T);
    while(T--) {
        scanf("%lld",&N);
        printf("%lld\n",C[N]);
    }

    return 0;
}
