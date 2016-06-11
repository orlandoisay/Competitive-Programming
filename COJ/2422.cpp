#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000
using namespace std;

ll T, A, B;

ll p(ll V, ll N) {
    if(!N) return 1;

    ll S = p(V,N/2);
    S = (S*S) % mod;

    if(N%2) return (V * S) % mod;
    return S;
}

int main() {
    scanf("%lld",&T);

    while(T--) {
        scanf("%lld %lld",&A,&B);
        printf("%lld\n",p(A,B));
    }
    return 0;
}
