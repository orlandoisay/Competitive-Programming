#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define MAXN 1000000
using namespace std;

ll N, V[MAXN + 5];

int main() {
    for(ll i=1;i<=MAXN;i++) {
        V[i] = V[i-1];
        if(i%2) V[i] = (V[i] + i*i) % mod;
    }

    while(scanf("%lld",&N) != EOF) {
        printf("%lld\n",V[N]);
    }
    return 0;
}
